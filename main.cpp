#include "engine.h"

int main()
{
    auto* engine = new Engine();
    engine->init();
    return engine->loop();
}