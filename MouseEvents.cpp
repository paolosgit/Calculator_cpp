//
// Created by Paolo Octoman on 2/21/23.
//

#ifndef CALCULATOR_MOUSEEVENTS_CPP
#define CALCULATOR_MOUSEEVENTS_CPP
#include "MouseEvents.h"


template<class T>
bool MouseEvents::isHovered(const T &obj, sf::RenderWindow& window) {

    return sf::Mouse::isButtonPressed(sf::Mouse::Left) && obj.getGlobalBounds().constains((sf::Vector2f)sf::Mouse::getPosition(window));

}



#endif