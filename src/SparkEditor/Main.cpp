#include "Engine.hpp"

#include "EditorWorld.hpp"

int main()
{
    EditorWorld world;
    g_engine.setWorld(world);

    g_engine.init();
    g_engine.run();
}