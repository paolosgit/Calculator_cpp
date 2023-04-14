//
// Created by Paolo Octoman on 2/14/23.
//

#include "Screen.h"
#include "Font.h"
#include "Helper.h"

Screen::Screen() {
    text.setFont(Font::getFont());
    text.setString(expression);
    text.setFillColor(sf::Color::Black);
    text.setCharacterSize(80);

    screen.setFillColor(sf::Color::White);
    screen.setSize({600, 200});
    screen.setPosition(500 ,150);
    Helper::centerText(screen, text);
    text.move(0, -50);

}

void Screen::draw(sf::RenderTarget &window, sf::RenderStates states) const {
    window.draw(screen);
    window.draw(text);
}

void Screen::addToString(std::string input) {
    expression = expression + input;
    text.setString(expression);
    Helper::centerText(screen, text);
}

void Screen::clear() {
    expression = "";
    text.setString(expression);

}

void Screen::move(float x, float y) {
    screen.move(x,y);
    text.move(x,y);
}



std::string Screen::getExpression() {
    return expression;
}
