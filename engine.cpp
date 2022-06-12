//
// Created by fadul on 12/06/2022.
//

#include "engine.h"

Engine::Engine()
{
    window = nullptr;
}

Engine::~Engine()
{
    delete window;
}

void Engine::init()
{
    window = new Window();
    window->init_window();
    window->create_window();
}

int Engine::loop()
{
    return window->loop();
}