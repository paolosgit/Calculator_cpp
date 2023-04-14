//
// Created by Paolo Octoman on 2/15/23.
//

#ifndef CALCULATOR_SHUNTINGYARD_H
#define CALCULATOR_SHUNTINGYARD_H
#include <queue>
#include <stack>
#include <string>
#include <cmath>
#include <vector>

class ShuntingYard {
private:
    std::queue<std::string> rpnQueue;
    std::stack<std::string> stacky;

public:
    ShuntingYard();
    std::queue<std::string> getQueue();
    bool is_number(const std::string &s);
    bool is_higherPrecedence(const std::string &currentOper, const std::string &topOper);
    void infixTopost(std::vector<std::string> infixEexpression);
    void checkQueue();





};


#endif //CALCULATOR_SHUNTINGYARD_H
