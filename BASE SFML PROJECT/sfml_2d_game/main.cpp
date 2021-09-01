#include "SFML/Graphics.hpp"

int main() {

	sf::RenderWindow window(sf::VideoMode(800, 600), "SFML window");


    while (window.isOpen())
    {
        // Event processing
        sf::Event event;
        while (window.pollEvent(event))
        {
            // Request for closing the window
            if (event.type == sf::Event::Closed)
                window.close();
        }
        // Clear the whole window before rendering a new frame
        window.clear();

    }
}