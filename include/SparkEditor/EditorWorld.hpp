#pragma once

#include "World.hpp"

class EditorWorld : public World
{
public:
    EditorWorld();
    ~EditorWorld();

protected:
    virtual void init() override;
    virtual void handleEvent(sf::Event& event) override;
    virtual void update(float dt) override;
    virtual void draw(sf::RenderTarget& target, sf::RenderStates states) override;
};

