//
// Created by Paolo Octoman on 2/21/23.
//

#ifndef CALCULATOR_MOUSEEVENTS_H
#define CALCULATOR_MOUSEEVENTS_H


#include <SFML/Graphics.hpp>

class MouseEvents {
public:
    template<class T>
    static bool isHovered(const T& obj, sf::RenderWindow& window);




};



#include "MouseEvents.cpp"
#endif //CALCULATOR_MOUSEEVENTS_H
