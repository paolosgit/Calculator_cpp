//
// Created by Paolo Octoman on 2/14/23.
//

#include "Application.h"
#include "Button.h"

void Application::run() {
    sf::RenderWindow window({420, 720, 32}, "calcodaddy");

    Button butto;

    while (window.isOpen()){
        sf::Event event;
        while (window.pollEvent(event)){
            if (sf::Event::Closed == event.type){
                window.close();
            }
        }


        window.clear();

        window.draw(butto);
        window.display();

    }
}
