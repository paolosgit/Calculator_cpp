//
// Created by Paolo Octoman on 2/15/23.
//

#include "Keyboard.h"

void Keyboard::draw(sf::RenderTarget &window, sf::RenderStates states) const {
    for (int i = 0; i < board.size(); ++i) {
        window.draw(board[i]);
    }
}

Keyboard::Keyboard() {
    board.push_back({"0", sf::Color::White, sf::Color::Red});
    board.push_back({"=", sf::Color::Black, sf::Color::Cyan});


    board.push_back({"1", sf::Color::White, sf::Color::Red});
    board.push_back({"2", sf::Color::White, sf::Color::Red});
    board.push_back({"3", sf::Color::White, sf::Color::Red});
    board.push_back({"+", sf::Color::Black, sf::Color::Cyan});


    board.push_back({"4", sf::Color::White, sf::Color::Red});
    board.push_back({"5", sf::Color::White, sf::Color::Red});
    board.push_back({"6", sf::Color::White, sf::Color::Red});
    board.push_back({"-", sf::Color::Black, sf::Color::Cyan});


    board.push_back({"7", sf::Color::White, sf::Color::Red});
    board.push_back({"8", sf::Color::White, sf::Color::Red});
    board.push_back({"9", sf::Color::White, sf::Color::Red});
    board.push_back({"x", sf::Color::Black, sf::Color::Cyan});


    board.push_back({"AC", sf::Color::White, sf::Color::Black});
    board.push_back({"(", sf::Color::White, sf::Color::Black});
    board.push_back({")", sf::Color::White, sf::Color::Black});
    board.push_back({"/", sf::Color::Black, sf::Color::Cyan});

    board.push_back({"^", sf::Color::White, sf::Color::Black});



    board[0].setPosition(500,1000);
    board[1].setPosition(950,1000);


    board[2].setPosition(500,850);
    board[3].setPosition(650,850);
    board[4].setPosition(800,850);
    board[5].setPosition(950,850);

    board[6].setPosition(500,700);
    board[7].setPosition(650,700);
    board[8].setPosition(800,700);
    board[9].setPosition(950,700);

    board[10].setPosition(500,550);
    board[11].setPosition(650,550);
    board[12].setPosition(800,550);
    board[13].setPosition(950,550);

    board[14].setPosition(500,400);
    board[15].setPosition(650,400);
    board[16].setPosition(800,400);
    board[17].setPosition(950,400);

    board[18].setPosition(800,1000);


}

void Keyboard::move(float offsetX, float offsetY) {
    for (int i = 0; i < board.size(); ++i) {
        board[i].moveButton(offsetX,offsetY);
    }
}

 std::vector<Button> &Keyboard::getBoard() {
    return board;
}
