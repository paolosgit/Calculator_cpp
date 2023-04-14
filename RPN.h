//
// Created by Paolo Octoman on 2/15/23.
//

#ifndef CALCULATOR_RPN_H
#define CALCULATOR_RPN_H
#include <stack>
#include <string>
#include <queue>
#include <iostream>

class RPN {
private:
    int result;
    std::stack<int> expressionStack;


public:
    RPN();
    void calculate(const std::string& expression);
    void calculate( std::queue<std::string> expression);
    bool is_number(const std::string& s);
    void testStack();
    int simpleCalculation(int lhs, const std::string& oper, int rhs);
    void printRes();
    int getRes();


};


#endif //CALCULATOR_RPN_H
