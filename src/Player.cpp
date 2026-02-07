#include "../header/Player.h"

Player::Player()
    :   m_Speed{START_SPEED},
        m_Health{START_HEALTH},
        m_MaxHealth{START_HEALTH},
        m_Texture{},
        m_Sprite{}
{
    m_Texture.loadFromFile("../img/player.png");
    m_Sprite.setTexture(m_Texture);

    // Set the sprite origin to the center
    m_Sprite.setOrigin(25,25);
}

void Player::spawn(IntRect arena, Vector2f resolution, int tileSize)
{
    // Spawn player center of the arena
    m_Position.x = arena.width/2;
    m_Position.y = arena.height/2;

    // Copy the details of the arena to the players arena variables
    m_Arena.left = arena.left;
    m_Arena.width = arena.width;
    m_Arena.top = arena.top;
    m_Arena.height = arena.height;

    // Remember the arena tileSize
    m_TileSize = tileSize;

    // Store the resolution
    m_Resolution.x = resolution.x;
    m_Resolution.y = resolution.y;

}