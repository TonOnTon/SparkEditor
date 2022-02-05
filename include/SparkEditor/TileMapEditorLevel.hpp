#pragma once

#include "TileMapEditorCamera.hpp"
#include "Level.hpp"
#include "TileMap.hpp"

class TileMapEditorLevel : public Level
{
public:
    TileMapEditorLevel();
    ~TileMapEditorLevel();

    virtual void init() override;
    virtual void handleEvent(sf::Event& event) override;
    virtual void update(float dt) override;
    virtual void draw(sf::RenderTarget& target, sf::RenderStates states) override;

private:
    TileMap m_tileMap;
    TileMapEditorCamera m_camera;
};
