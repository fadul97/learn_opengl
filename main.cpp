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
}

void MyApp::draw()
{
}

void MyApp::finalize()
{
}

int main()
{
    Engine::init(new MyApp());
    return Engine::loop();
}