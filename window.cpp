//
// Created by fadul on 12/06/2022.
//

#include "window.h"

Window::Window()
{
    m_window_width = 600;
    m_window_height = 400;
    m_window_title = "Learn OpenGL";

    m_glfw_window = nullptr;
}

Window::~Window()
{
    m_glfw_window = nullptr;
}

bool Window::init_window()
{
    if(!glfwInit())
    {
        std::cerr << "Failed to initialize GLFW\n";
        return false;
    }

    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    return true;
}

bool Window::create_window()
{
    m_glfw_window = glfwCreateWindow(m_window_width, m_window_height, m_window_title, nullptr, nullptr);

    if(m_glfw_window == nullptr)
    {
        std::cerr << "Failed to create glfwWindow\n";
        glfwTerminate();
        return false;
    }

    glfwMakeContextCurrent(m_glfw_window);
    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
    {
        std::cerr << "Failed to initialize GLAD\n";
        return false;
    }

    glViewport(0, 0, m_window_width, m_window_height);
    glfwSetFramebufferSizeCallback(m_glfw_window, framebuffer_size_callback);

    return true;
}

int Window::loop()
{
    while(!glfwWindowShouldClose(m_glfw_window))
    {
        if (glfwGetKey(m_glfw_window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
            glfwSetWindowShouldClose(m_glfw_window, true);

        glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);

        glfwSwapBuffers(m_glfw_window);

        glfwPollEvents();
    }

    return 0;
}

void Window::framebuffer_size_callback(GLFWwindow *window, int width, int height)
{
    glViewport(0, 0, width, height);
}