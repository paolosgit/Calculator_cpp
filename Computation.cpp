//
// Created by Paolo Octoman on 2/15/23.
//

#include "Computation.h"

int Computation::calculation(std::vector<std::string> expression) {
    sy.infixTopost(expression);
    rpn.calculate(sy.getQueue());
    return rpn.getRes();
}

Computation::Computation() {

}

void Computation::addToExpression(std::string input) {
    expression.push_back(input);
}

void Computation::clearExpression() {
    expression.clear();
}

int Computation::calculation() {
    sy.infixTopost(expression);
    rpn.calculate(sy.getQueue());
    return rpn.getRes();
}

void Computation::backSpace() {
    expression.pop_back();
}


