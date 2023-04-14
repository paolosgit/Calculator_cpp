//
// Created by Paolo Octoman on 2/14/23.
//

#ifndef CALCULATOR_BUTTON_H
#define CALCULATOR_BUTTON_H
#include <SFML/Graphics.hpp>
#include <string>
#include "Helper.h"

#include "Font.h"
class Button : public sf::Drawable{
private:
    sf::CircleShape circle;
    sf::Text text;
    void init(const std::string &text, const sf::Color &textColor, const sf::Color &backColor);


public:
    Button();
    Button(const std::string& text);
    Button( const std::string& text, const sf::Color& textColor, const sf::Color& backgroundColor);



    virtual void draw(sf::RenderTarget& window, sf::RenderStates states) const;
    void setBackgroundColor(const sf::Color& color);
    void setTextColor(const sf::Color& color);
    void setText(const std::string& text);
     std::string getText();
    void setPosition(float x, float y);
    void moveButton(float offsetX, float offsetY);
    void setScale(float scale);
    void setButtonSize(float size);
    void setTextSize(float size);


    sf::FloatRect getGlobalBounds();

};



#endif //CALCULATOR_BUTTON_H
