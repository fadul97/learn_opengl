//
// Created by fadul on 12/06/2022.
//

#ifndef LEARN_OPENGL_WINDOW_H
#define LEARN_OPENGL_WINDOW_H

#include <iostream>
#include <glad/glad.h>
#include <GLFW/glfw3.h>

class Window
{
private:
    int m_window_width;
    int m_window_height;
    const char *m_window_title;
    GLFWwindow *m_glfw_window;

    static void framebuffer_size_callback(GLFWwindow *window, int width, int height);

public:
    Window();
    ~Window();

    bool init_window();
    bool create_window();
    int loop();

    GLFWwindow* get_glfw_window();
};

inline GLFWwindow* Window::get_glfw_window() { return m_glfw_window; }

#endif //LEARN_OPENGL_WINDOW_H
