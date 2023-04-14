//
// Created by Paolo Octoman on 2/15/23.
//

#ifndef CALCULATOR_COMPUTATION_H
#define CALCULATOR_COMPUTATION_H
#include "RPN.h"
#include "ShuntingYard.h"
#include <vector>
#include <string>
#include <iostream>
class Computation {
private:
    RPN rpn;
    ShuntingYard sy;
    std::vector<std::string> expression;
public:
    Computation();
    int calculation(std::vector<std::string> expression);
    int calculation();
    void addToExpression(std::string input);
    void clearExpression();
    void backSpace();

};


#endif //CALCULATOR_COMPUTATION_H
