//
// Created by fadul on 12/06/2022.
//

#include "engine.h"

Window* Engine::m_window = nullptr;
Application* Engine::m_app = nullptr;

Engine::Engine() = default;

Engine::~Engine()
{
    delete m_window;
}

void Engine::init(Application* app)
{
    m_window = new Window();
    m_window->init_window();
    m_window->create_window();

    m_app = app;
}

int Engine::loop()
{
    m_app->init();

    do
    {
        glClear(GL_COLOR_BUFFER_BIT);

        m_app->update();

        m_app->draw();

        glfwSwapBuffers(m_window->get_glfw_window());

        glfwPollEvents();
    } while(!glfwWindowShouldClose(m_window->get_glfw_window()));

    m_app->finalize();

    return 0;
}