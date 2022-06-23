#include "engine/learn_opengl.h"
#include "triangle.h"

int main()
{
    Engine::init(new Triangle());
    return Engine::loop();
}