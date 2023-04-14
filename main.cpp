#include <iostream>
#include <SFML/Graphics.hpp>
#include "Application.h"
#include <string>
#include <queue>
#include <vector>

#include "Computation.h"
#include "Calculator.h"
#include "Keyboard.h"
#include "RPN.h"


int main() {

    sf::RenderWindow window({1300, 1300, 32}, "Simple Calculator");
    window.setFramerateLimit(10);
    window.setKeyRepeatEnabled(false);
    Calculator calculator;
    Keyboard kb;



    while (window.isOpen()){
        sf::Event event;
        while (window.pollEvent(event)){
            if (sf::Event::Closed == event.type){
                window.close();
            }
        }

        sf::Vector2f m_pos = (sf::Vector2f) sf::Mouse::getPosition(window);


        for (int i = 0; i < kb.getBoard().size(); ++i) {
            if (kb.getBoard()[i].getGlobalBounds().contains(m_pos)){
                if (i == 1||i == 5||i == 9||i == 13||i == 14||i == 15||i == 16||i == 17|| i ==18){
                    if (i == 1||i == 5||i == 9||i == 13||i == 17){
                        kb.getBoard()[i].setBackgroundColor(sf::Color::Blue);
                        kb.getBoard()[i].setTextColor(sf::Color::White);
                    }
                    else
                    {
                        kb.getBoard()[i].setBackgroundColor(sf::Color::White);
                        kb.getBoard()[i].setTextColor(sf::Color::Black);
                    }
                }
                else
                {
                    kb.getBoard()[i].setBackgroundColor({255,105,180});
                    kb.getBoard()[i].setTextColor(sf::Color::Black);
                }


            }
            else{
                if (i == 1||i == 5||i == 9||i == 13 ||i == 14||i == 15||i == 16 ||i == 17 || i ==18){
                    if (i == 1||i == 5||i == 9||i == 13||i == 17){
                        kb.getBoard()[i].setBackgroundColor(sf::Color::Cyan);
                        kb.getBoard()[i].setTextColor(sf::Color::Black);
                    }
                    else
                    {
                        kb.getBoard()[i].setBackgroundColor(sf::Color::Black);
                        kb.getBoard()[i].setTextColor(sf::Color::White);
                    }
                }
                else {
                    kb.getBoard()[i].setBackgroundColor(sf::Color::Red);
                    kb.getBoard()[i].setTextColor(sf::Color::White);
                }
            }


             if (kb.getBoard()[i].getGlobalBounds().contains(m_pos) && sf::Mouse::isButtonPressed(sf::Mouse::Left) && i != 14 && i !=1 ){
                calculator.type(kb.getBoard()[i].getText());
                calculator.addToExpression(kb.getBoard()[i].getText());

            }
             else if(kb.getBoard()[i].getGlobalBounds().contains(m_pos) && sf::Mouse::isButtonPressed(sf::Mouse::Left) && i == 14){
                 calculator.clearScreen();
                 calculator.clearVec();

             }
             else if(kb.getBoard()[i].getGlobalBounds().contains(m_pos) && sf::Mouse::isButtonPressed(sf::Mouse::Left) && i == 1){

                 calculator.setText(calculator.compute());

             }


        }

        window.clear();
        window.draw(calculator);
        window.draw(kb);
        window.display();

    }


    return 0;
}
