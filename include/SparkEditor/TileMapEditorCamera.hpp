#pragma once

#include "Camera.hpp"

class TileMapEditorCamera : public Camera
{
public:
    TileMapEditorCamera();
    ~TileMapEditorCamera();

    void init() override;
    void handleEvent(sf::Event& event) override;
    void update(float dt) override;
    void draw(sf::RenderTarget& target, sf::RenderStates states) override;

private:
    float m_speed             = 500.0f;
    bool  m_midleMousePressed = false;

    sf::Vector2f m_grapPos;
};
