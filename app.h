//
// Created by fadul on 12/06/2022.
//

#ifndef LEARN_OPENGL_APP_H
#define LEARN_OPENGL_APP_H

#include "window.h"
#include "engine.h"

class App
{
protected:
    static Window*& m_window;

public:
    App();
    virtual ~App();

    virtual void init() = 0;
    virtual void update() = 0;
    virtual void draw() = 0;
    virtual void finalize() = 0;
};

#endif //LEARN_OPENGL_APP_H
