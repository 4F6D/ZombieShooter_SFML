#include <SFML/Graphics.hpp>

// Bad practice area
using namespace sf;

int main() {
    const uint SCREEN_WDITH{1920};
    const uint SCREEN_HEIGHT{1080};

    sf::RenderWindow window(sf::VideoMode(SCREEN_WDITH, SCREEN_HEIGHT), "ZombieShooter");

    // MAIN LOOP
    while (window.isOpen()) {


        // No Idea
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) window.close();
        }

        // **** CONTROLS ****
        if(Keyboard::isKeyPressed(Keyboard::Escape))
        {
            window.close();
        }

        // **** UPDATE ****

        // **** DRAW ****
        window.clear();
        
        window.display();
    }
}
