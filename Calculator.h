//
// Created by Paolo Octoman on 2/14/23.
//

#ifndef CALCULATOR_CALCULATOR_H
#define CALCULATOR_CALCULATOR_H
#include <SFML/Graphics.hpp>
#include "Screen.h"
#include "Keyboard.h"
#include "Base.h"
#include "Computation.h"
#include <vector>
#include <string>

class Calculator : public sf::Drawable{
private:
    Computation comp;
    Keyboard kb;
    Screen screen;
    Base base;
    std::vector<std::string> expression;

public:
    Calculator();
    virtual void draw(sf::RenderTarget& window, sf::RenderStates states) const;
    void move(float x, float y);
    void type(std::string input);
    void clearScreen();
    void clearVec();

    void setText(int num);
    int compute();
    void addToExpression(std::string input);
    std::string getExpression();
    void testComp();

    std::vector<Button>& getBoard();

};


#endif //CALCULATOR_CALCULATOR_H
