//
// Created by fadul on 12/06/2022.
//

#ifndef LEARN_OPENGL_ENGINE_H
#define LEARN_OPENGL_ENGINE_H

#include "application.h"
#include "window.h"

class Application;

class Engine
{
public:
    static Window* m_window;
    static Application* m_app;

    Engine();
    ~Engine();

    static void init(Application* app);
    static int loop();
};

#endif //LEARN_OPENGL_ENGINE_H
