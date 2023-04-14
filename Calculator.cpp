//
// Created by Paolo Octoman on 2/14/23.
//

#include "Calculator.h"

void Calculator::draw(sf::RenderTarget &window, sf::RenderStates states) const {
    window.draw(base);
    window.draw(screen);
    window.draw(kb);
}

Calculator::Calculator() {

}

void Calculator::move(float x, float y) {
    base.move(x,y);
    screen.move(x,y);
    kb.move(x,y);
}

void Calculator::type(std::string input) {
    screen.addToString(input);
}

void Calculator::clearScreen() {
    screen.clear();
}

 std::vector<Button> &Calculator::getBoard() {
     return kb.getBoard();
}

void Calculator::setText(int num) {
    std::string s = std::to_string(num);
    screen.clear();
    screen.addToString(s);
}

void Calculator::addToExpression(std::string input) {
    expression.push_back(input);
}

int Calculator::compute() {
    return comp.calculation(expression);

}

void Calculator::clearVec() {
    expression.clear();
}

void Calculator::testComp() {
    std::cout << compute();
}



std::string Calculator::getExpression() {
    return screen.getExpression();
}
