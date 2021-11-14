#pragma once
#include <SFML/Graphics.hpp>
#include <string>

class SFML_Mouse
{
public:



	sf::Vector2i GetPosition(sf::Window& window);
	
	void SetCursorTexture(sf::Window& window ,std::string image, sf::Vector2u size );
	void SetCursorTexture(sf::Window& window, sf::Cursor::Type type);




private:
	





};

