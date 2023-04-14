//
// Created by Paolo Octoman on 2/15/23.
//

#include "RPN.h"
#include <cmath>
#include <queue>
RPN::RPN() {

}

void RPN::calculate(const std::string &expression) {
    for (int i = 0; i < expression.size(); ++i) {


        if (is_number(expression.substr(i,1))){
            int stringNumasInt = std::stoi(expression.substr(i,1));
            expressionStack.push(stringNumasInt);
        }
        else if(!is_number(expression.substr(i,1))){
            int rhs = expressionStack.top();
            expressionStack.pop();
            int lhs = expressionStack.top();
            expressionStack.pop();

            expressionStack.push(simpleCalculation(lhs, expression.substr(i,1), rhs));

        }

    }

    result = expressionStack.top();
    expressionStack.pop();

}

void RPN::calculate( std::queue<std::string> expression) {
    while (!expression.empty()) {


        if (is_number(expression.front())){
            int stringNumasInt = std::stoi(expression.front());
            expressionStack.push(stringNumasInt);
        }
        else if(!is_number(expression.front())){
            int rhs = expressionStack.top();
            expressionStack.pop();
            int lhs = expressionStack.top();
            expressionStack.pop();

            expressionStack.push(simpleCalculation(lhs, expression.front(), rhs));

        }

        expression.pop();

    }

    result = expressionStack.top();
    expressionStack.pop();

}

bool RPN::is_number(const std::string &s) {
    return !s.empty() && std::find_if(s.begin(),
                                      s.end(), [](unsigned char c) { return !std::isdigit(c); }) == s.end();
}

void RPN::testStack() {
    while (expressionStack.size() != 0){
        std::cout << expressionStack.top() << " ";
        expressionStack.pop();
    }


}

int RPN::simpleCalculation(int lhs, const std::string & oper, int rhs) {
    int answer;

    if (oper == "+"){
        answer = lhs + rhs;
    }
    if (oper == "-"){
        answer = lhs - rhs;
    }
    if (oper == "*"){
        answer = lhs * rhs;
    }
    if (oper == "x"){
        answer = lhs * rhs;
    }
    if (oper == "/"){
        answer = lhs / rhs;
    }
    if (oper == "^"){
        answer = pow(lhs, rhs);
    }


    return answer;
}

void RPN::printRes() {
    std::cout << result;
}

int RPN::getRes() {
    return result;
}
