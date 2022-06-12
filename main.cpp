#include "window.h"

int main()
{
    auto* window = new Window();
    window->init_window();
    window->create_window();
    return window->loop();
}