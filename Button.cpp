//
// Created by Paolo Octoman on 2/14/23.
//

#include "Button.h"

Button::Button() : Button("=",sf::Color::White , {255, 149, 0}){

}

Button::Button(const std::string &text) : Button(text, sf::Color::White, {212, 212, 0}) {

}

Button::Button(const std::string &text, const sf::Color &textColor, const sf::Color &backgroundColor) {

    init(text,textColor, backgroundColor);

}

void Button::draw(sf::RenderTarget &window, sf::RenderStates states) const {
    window.draw(circle);
    window.draw(text);

}

void Button::setBackgroundColor(const sf::Color &color) {
    circle.setFillColor(color);
}

void Button::setTextColor(const sf::Color &color) {
    text.setFillColor(color);
}

void Button::setText(const std::string &text) {
    this->text.setString(text);
}

 std::string Button::getText() {
    return text.getString();
}

void Button::setPosition(float x, float y) {
    circle.setPosition(x, y);
    Helper::centerText(circle, text);
}

void Button::setButtonSize(float size) {
    circle.setRadius(size);
    Helper::centerText(circle, text);
}

void Button::init(const std::string &text, const sf::Color &textColor, const sf::Color &backColor) {
    this->text.setFont(Font::getFont());
    this->text.setString(text);
    this->text.setFillColor(textColor);


    this->text.setCharacterSize(80);

    circle.setFillColor(backColor);
    circle.setRadius(60);

    Helper::centerText(circle, this->text);

}

sf::FloatRect Button::getGlobalBounds() {
    return circle.getGlobalBounds();
}

void Button::moveButton(float offsetX, float offsetY) {
    circle.move(offsetX, offsetY);
    Helper::centerText(circle, text);
}

void Button::setScale(float scale) {
    circle.setScale(scale, scale);
    text.setScale(scale,scale);
//    Helper::centerText(circle, text);
}

void Button::setTextSize(float size) {
    text.setCharacterSize(size);
    Helper::centerText(circle, text);
}


