#include "SFML_Mouse.h"


sf::Vector2i SFML_Mouse::GetPosition(sf::Window& window)
{
	return sf::Mouse::getPosition(window);
}


void SFML_Mouse::SetCursorTexture(sf::Window& window,std::string image, sf::Vector2u size)
{

	sf::Image Image;
	Image.loadFromFile(image);

	sf::Cursor Texture_Cursor;
	Texture_Cursor.loadFromPixels(Image.getPixelsPtr(), size , sf::Vector2u(0, 0));
	window.setMouseCursor(Texture_Cursor);
}

void SFML_Mouse::SetCursorTexture(sf::Window& window, sf::Cursor::Type type)
{

	sf::Cursor Texture_Cursor;
	Texture_Cursor.loadFromSystem(type);
	window.setMouseCursor(Texture_Cursor);

}

