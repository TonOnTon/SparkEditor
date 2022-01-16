#include "EditorWorld.hpp"

#include <iostream>

EditorWorld::EditorWorld()
{
}

EditorWorld::~EditorWorld()
{
}

void EditorWorld::init()
{
    World::init();

    std::cout << "Editor::init\n";
}

void EditorWorld::handleEvent(sf::Event& event)
{
    World::handleEvent(event);

    std::cout << "Editor::handleEvent\n";
}

void EditorWorld::update(float dt)
{
    World::update(dt);

    std::cout << "Editor::update\n";
}

void EditorWorld::draw(sf::RenderTarget& target, sf::RenderStates states)
{
    World::draw(target, states);

     std::cout << "Editor::draw\n";
}

