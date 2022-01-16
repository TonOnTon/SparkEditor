#include "Engine.hpp"

#include "EditorWorld.hpp"

int main()
{
    EditorWorld world;

    Engine engine(world);
    engine.init();
    engine.run();
}