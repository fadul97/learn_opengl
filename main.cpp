#include "learn_opengl.h"

class MyApp : public Application
{
public:
    void init() override;
    void update() override;
    void draw() override;
    void finalize() override;
};

void MyApp::init()
{
}

void MyApp::update()
{
    if (glfwGetKey(m_window->get_glfw_window(), GLFW_KEY_ESCAPE) == GLFW_PRESS)
        glfwSetWindowShouldClose(m_window->get_glfw_window(), true);
}

void MyApp::draw()
{
    glClearColor(0.6f, 0.6f, 0.7f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
}

void MyApp::finalize()
{
}

int main()
{
    Engine::init(new MyApp());
    return Engine::loop();
}