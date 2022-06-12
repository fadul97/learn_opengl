//
// Created by fadul on 12/06/2022.
//

#ifndef LEARN_OPENGL_ENGINE_H
#define LEARN_OPENGL_ENGINE_H

#include "window.h"

class Engine
{
private:
    Window *window;

public:
    Engine();
    ~Engine();

    void init();
    int loop();
};

#endif //LEARN_OPENGL_ENGINE_H
