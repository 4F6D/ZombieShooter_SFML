#pragma once
#include <SFML/Graphics.hpp>

using namespace sf;

class Player {
private:
    const float START_HEALTH{200};
    const float START_SPEED{100};

    Texture m_Texture;
    Sprite m_Sprite;
    Vector2f m_Position;    // Where is the player
    Vector2f m_Resolution;  // Screen resolution
    IntRect m_Arena;        // Size of the current arena
    int m_TileSize;         // Size of each tile in the arena

    // Player direction
    bool m_UpPressed;
    bool m_DownPressed;
    bool m_LeftPressed;
    bool m_RightPressed;

    int m_Health;
    int m_MaxHealth;
    float m_Speed;
    Time m_LastHit;         // When was the payer last hit
    
public:
    Player();
    void spawn(IntRect arena, Vector2f resolution, int tileSize);
    // Calling this at the end of every game
    void resetPlayerStats();

    // Handle the player getting hit by a zombie
    bool hit(Time timeHit);
    Time getLastHitTime();      // How long ago was the player last hit
    FloatRect getPosition();    // Where is the player
    Vector2f getCenter();       // Where is the center of the player
    float getRotation();        // What angle is the player facing
    Sprite getSprite();         // Send copy of sprite to main
    
    // Move the player
    void moveLeft();
    void moveRight();
    void moveUp();
    void moveDown();
    void stopLeft();
    void stopRight();
    void stopUp();
    void stopDown();

    // Update (Once every frame)
    void update(float elapsedTime, Vector2i mousePosition);
    
    void upgradeSpeed();                    // Give the player a speedbost
    void upgradeHealth();                   // Give the player some health
    void increaseHealthLevel(int amount);   // Heal up
    int getHealth();                       // How much health does the player currently have?

};