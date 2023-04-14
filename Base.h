//
// Created by Paolo Octoman on 2/14/23.
//

#ifndef CALCULATOR_BASE_H
#define CALCULATOR_BASE_H
#include <SFML/Graphics.hpp>
#include <iostream>

class Base : public sf::Drawable{
private:
    sf::RectangleShape base;


public:
    virtual void draw(sf::RenderTarget& window, sf::RenderStates states) const;
    Base();
    void move(float x, float y);
};


#endif //CALCULATOR_BASE_H
