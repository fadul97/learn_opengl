//
// Created by fadul on 23/06/2022.
//

#ifndef LEARN_OPENGL_TRIANGLE_H
#define LEARN_OPENGL_TRIANGLE_H

#include "engine/learn_opengl.h"

class Quad : public Application
{
private:
    const char* m_vertex_shader_source;
    const char* m_fragment_shader_source;

    unsigned int m_vertex_shader;
    unsigned int m_fragment_shader;
    unsigned int m_shader_program;

    unsigned int m_vbo;
    unsigned int m_vao;
    unsigned int m_ebo;

    int m_success;
    char m_info_log[512]{};

    static float vertices[12];
    static int indices[6];

public:
    Quad();
    ~Quad() override;

    void init() override;
    void draw() override;
    void update() override;
    void finalize() override;
};

#endif //LEARN_OPENGL_TRIANGLE_H

