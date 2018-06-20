#include <SFML/Graphics.hpp>
#include "boards.cpp"
#include <stdio.h>
int main()
{
    sf::RenderWindow window(sf::VideoMode(500, 500), "Pong!");
    board_t board1, board2;    
    while (window.isOpen())
    {
	board1.setPosition(0, board1.yPos);
        board2.setPosition(495, board2.yPos); 
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        
        window.clear();
        window.draw(board1);
        window.draw(board2);
        window.display();
    }

    return 0;

}


