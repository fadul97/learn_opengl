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
    do
    {
        if (glfwGetKey(window->get_glfw_window(), GLFW_KEY_ESCAPE) == GLFW_PRESS)
            glfwSetWindowShouldClose(window->get_glfw_window(), true);

        glClearColor(0.5f, 0.3f, 0.3f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);

        glfwSwapBuffers(window->get_glfw_window());

        glfwPollEvents();
    } while(!glfwWindowShouldClose(window->get_glfw_window()));

    return 0;
}