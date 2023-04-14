//
// Created by Paolo Octoman on 2/14/23.
//

#ifndef CALCULATOR_SCREEN_H
#define CALCULATOR_SCREEN_H
#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>

class Screen : public sf::Drawable{
private:
    std::string expression;
    sf::RectangleShape screen;
    sf::Text text;

public:
    Screen();
    virtual void draw(sf::RenderTarget& window, sf::RenderStates states) const;
    void addToString(std::string input);
    void clear();
    void move(float x, float y);
    std::string getExpression();


};


#endif //CALCULATOR_SCREEN_H
