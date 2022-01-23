#include "TileMapEditorLevel.hpp"

#include <iostream>

TileMapEditorLevel::TileMapEditorLevel()
{
}

TileMapEditorLevel::~TileMapEditorLevel()
{
}

void TileMapEditorLevel::init()
{
    std::cout << "TileMapEditorLevel::init\n";

    Level::init();
}

void TileMapEditorLevel::handleEvent(sf::Event& event)
{
    Level::handleEvent(event);
}

void TileMapEditorLevel::update(float dt)
{
    Level::update(dt);
}

void TileMapEditorLevel::draw(sf::RenderTarget& target, sf::RenderStates states)
{
    Level::draw(target, states);
}
