//
// Created by Paolo Octoman on 2/14/23.
//

#ifndef CALCULATOR_HELPER_H
#define CALCULATOR_HELPER_H
#include <SFML/Graphics.hpp>
#include <cmath>

class Helper {
public:


    template<typename T>
    static void centerText(const T & obj, sf::Text& text);
};

#include "Helper.cpp"
#endif //CALCULATOR_HELPER_H
