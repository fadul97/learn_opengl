//
// Created by fadul on 12/06/2022.
//

#ifndef LEARN_OPENGL_ENGINE_H
#define LEARN_OPENGL_ENGINE_H

#include "app.h"
#include "window.h"

class App;

class Engine
{
public:
    static Window* m_window;
    static App* m_app;

    Engine();
    ~Engine();

    static void init(App* app);
    static int loop();
};

#endif //LEARN_OPENGL_ENGINE_H
