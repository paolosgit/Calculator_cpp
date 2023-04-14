//
// Created by Paolo Octoman on 2/15/23.
//

#include "ShuntingYard.h"
#include <vector>
#include <cmath>
#include <iostream>


ShuntingYard::ShuntingYard() {

}

std::queue<std::string> ShuntingYard::getQueue() {
    return rpnQueue;
}

void ShuntingYard::infixTopost(std::vector<std::string> infixEexpression) {
    for (int i = 0; i < infixEexpression.size(); ++i) {
        if (is_number(infixEexpression[i])){
            rpnQueue.push(infixEexpression[i]);
        }
        else if(!is_number(infixEexpression[i]) && stacky.size() ==0){
            stacky.push(infixEexpression[i]);
        }
        else if (!is_number(infixEexpression[i])  && infixEexpression[i] != ")"){
            if (is_higherPrecedence(infixEexpression[i], stacky.top())){
                stacky.push(infixEexpression[i]);
            }
            else {
                do {
                    rpnQueue.push(stacky.top());
                    stacky.pop();
                    if (stacky.size() == 0){
                        break;
                    }
                } while (is_higherPrecedence(infixEexpression[i], stacky.top()));
                stacky.push(infixEexpression[i]);
            }
        }
        else if ( infixEexpression[i] == ")"){
            while (stacky.top() != "("){
                rpnQueue.push(stacky.top());
                stacky.pop();
            }
            if (stacky.top() == "("){
                stacky.pop();
            }
        }



    }

    while (!stacky.empty()){
        rpnQueue.push(stacky.top());
        stacky.pop();
    }


}

bool ShuntingYard::is_number(const std::string &s) {
    return !s.empty() && std::find_if(s.begin(),
                                      s.end(), [](unsigned char c) { return !std::isdigit(c); }) == s.end();

}

bool ShuntingYard::is_higherPrecedence(const std::string &currentOper, const std::string &topOper) {
    if (currentOper == topOper){
        return false;
    }
    if ( currentOper == "("){
        return true;
    }

    if (currentOper == "^"){
        return true;
    }
    if(currentOper == "*" || currentOper == "x"){
        if (topOper =="+" ||topOper =="-" ||topOper =="/"||topOper =="("){
            return true; //MUST KNOW TO SEE IF THE OPERATORS ARE THE SAME
        } else
            return false;
    }
    if(currentOper == "/"){
        if (topOper =="+" ||topOper =="-" ||topOper =="("){
            return true; //MUST KNOW TO SEE IF THE OPERATORS ARE THE SAME
        } else
            return false;
    }
    if(currentOper == "+"){
        if (topOper =="-" ||topOper =="("){
            return true; //MUST KNOW TO SEE IF THE OPERATORS ARE THE SAME
        } else
            return false;
    }
    if(currentOper == "-"){
        if (topOper =="("){
            return true; //MUST KNOW TO SEE IF THE OPERATORS ARE THE SAME
        } else
            return false;
    }


}

void ShuntingYard::checkQueue() {
    while (rpnQueue.size() != 0){
        std::cout << rpnQueue.front() << " ";
        rpnQueue.pop();
    }
}
