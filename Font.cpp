//
// Created by Paolo Octoman on 2/14/23.
//

#include "Font.h"

sf::Font Font::font;

void Font::loadFont() {
    font.loadFromFile("Font/TheFountainOfWishesRegular-OVxw4.ttf");
}

sf::Font &Font::getFont() {
    loadFont();
    return font;
}
