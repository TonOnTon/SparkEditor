#pragma once

#include "Level.hpp"

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
};
