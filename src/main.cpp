//
// main.cpp for SFML in /home/guacamole/Personal_Project/SFML_engine
// 
// Made by guacamole
// Login   <faudil.puttilli@epitech.eu>
// 
// Started on  Mon Apr 10 13:08:03 2017 guacamole
// Last update Wed Jun  7 14:53:56 2017 guacamole
//

#include <SFML/Graphics.hpp>

void	key_handler(sf::RenderWindow& window, sf::Event::KeyEvent key)
{
  if (key.code == sf::Keyboard::Escape)
    window.close();
}

void	event_handler(sf::RenderWindow& window)
{
  sf::Event	event;

  while (window.pollEvent(event))
    {
      switch (event.type)
	{
	case sf::Event::Closed:
	  window.close();
	  break;
	case sf::Event::KeyPressed:
	  key_handler(window, event.key);
	}
      if (event.type == sf::Event::Closed)
	window.close();
    }
}

int	main()
{
  sf::RenderWindow window(sf::VideoMode(1920, 1080), "Faudil est le meilleur");
  sf::Sprite	sprite;

  while (window.isOpen())
    {
      event_handler(window);
      window.clear();
      window.display();
    }
  return (0);
}
