#include <SFML/Graphics.hpp>
class board : public sf::RectangleShape{
  public:
      int yPos;
      board(){
        yPos = 150;
        this->setFillColor(sf::Color::Green);
        this->setSize(sf::Vector2f(5,150));
   }
}typedef board_t;

