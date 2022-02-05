#include "EditorWorld.hpp"

EditorWorld::EditorWorld()
{
}

EditorWorld::~EditorWorld()
{
}

void EditorWorld::init()
{
    m_level = &m_tileMapEditorLevel;

    World::init();
}

void EditorWorld::handleEvent(sf::Event& event)
{
    World::handleEvent(event);
}

void EditorWorld::update(float dt)
{
    World::update(dt);
}

void EditorWorld::draw(sf::RenderTarget& target, sf::RenderStates states)
{
    World::draw(target, states);
}

