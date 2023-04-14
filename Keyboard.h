//
// Created by Paolo Octoman on 2/15/23.
//

#ifndef CALCULATOR_KEYBOARD_H
#define CALCULATOR_KEYBOARD_H
#include <SFML/Graphics.hpp>
#include "Button.h"
#include <vector>
#include <iostream>


class Keyboard : public sf::Drawable{
private:
    std::vector<Button> board;
public:
    virtual void draw(sf::RenderTarget& window, sf::RenderStates states) const;
    Keyboard();
    void move(float offsetX, float offsetY);
    std::vector<Button>& getBoard();

};


#endif //CALCULATOR_KEYBOARD_H
