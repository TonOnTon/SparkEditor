#include "TileMapEditorCamera.hpp"

#include "Engine.hpp"

#include <SFML/Window/Event.hpp>
#include <SFML/Window/Keyboard.hpp>
#include <iostream>

TileMapEditorCamera::TileMapEditorCamera()
{
}

TileMapEditorCamera::~TileMapEditorCamera()
{
}

void TileMapEditorCamera::init()
{
}

void TileMapEditorCamera::handleEvent(sf::Event& event)
{
    if (event.type == sf::Event::EventType::MouseWheelScrolled)
    {
        m_view.zoom(event.mouseWheelScroll.delta < 0 ? 1.1f : 0.9f);
    }
    else if (event.type == sf::Event::EventType::MouseButtonPressed)
    {
        if (event.mouseButton.button == sf::Mouse::Button::Middle)
        {
            m_grapPos = g_engine.getMousePosView();
        }
    }
    else if (event.type == sf::Event::EventType::MouseMoved && sf::Mouse::isButtonPressed(sf::Mouse::Button::Middle))
    {
        if (g_engine.getMousePosView() != m_grapPos)
        {
            sf::Vector2f grapDirection;
            grapDirection.x = m_grapPos.x - g_engine.getMousePosView().x;
            grapDirection.y = m_grapPos.y - g_engine.getMousePosView().y;

            if (std::abs(grapDirection.x) > 0 && std::abs(grapDirection.y) > 0)
            {

                grapDirection.x = grapDirection.x > 0 ? grapDirection.x / grapDirection.x :
                                                        grapDirection.x / -grapDirection.x;
                grapDirection.y = grapDirection.y > 0 ? grapDirection.y / grapDirection.y :
                                                        grapDirection.y / -grapDirection.y;

                std::cout << grapDirection.x << " " << grapDirection.y << "\n";

                m_view.move(grapDirection * m_speed * g_engine.getDt());
            }
        }
    }
}

void TileMapEditorCamera::update(float dt)
{
    sf::Vector2f direction;

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::W))
    {
        direction.y -= 1;
    }

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S))
    {
        direction.y += 1;
    }

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A))
    {
        direction.x -= 1;
    }

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D))
    {
        direction.x += 1;
    }

    m_view.move(m_speed * direction * dt);
}

void TileMapEditorCamera::draw(sf::RenderTarget& target, sf::RenderStates states)
{
}
