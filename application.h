//
// Created by fadul on 12/06/2022.
//

#ifndef LEARN_OPENGL_APPLICATION_H
#define LEARN_OPENGL_APPLICATION_H

#include "window.h"
#include "engine.h"

class Application
{
protected:
    static Window*& m_window;

public:
    Application();
    virtual ~Application();

    virtual void init() = 0;
    virtual void update() = 0;
    virtual void draw(){};
    virtual void finalize() = 0;
};

#endif //LEARN_OPENGL_APPLICATION_H
