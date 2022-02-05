#include "TileMapEditorLevel.hpp"

#include "Engine.hpp"

TileMapEditorLevel::TileMapEditorLevel()
{
    g_engine.setCamera(m_camera);
}

TileMapEditorLevel::~TileMapEditorLevel()
{
}

void TileMapEditorLevel::init()
{
    m_camera.init();
    m_tileMap.load("test.map");
}

void TileMapEditorLevel::handleEvent(sf::Event& event)
{
    m_camera.handleEvent(event);
}

void TileMapEditorLevel::update(float dt)
{
    m_camera.update(dt);
}

void TileMapEditorLevel::draw(sf::RenderTarget& target, sf::RenderStates states)
{
    m_camera.draw(target, states);
    m_tileMap.draw(target, states);
}
