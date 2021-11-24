#pragma once

#include <SFML/Graphics.hpp>
#include <string>

struct TextureTile {

	sf::Texture texture;
	sf::Vector2i TileSiezInPixe;
	sf::Vector2i TextureSizeInPixe;

};

struct Animation {

	bool run = false;
	bool oneRun = false;
	sf::Vector2i DefauleFramePositionXY = { 0,0 };
	TextureTile textureTile;
	int FrameTimeMilliseconds = 50;

};



class SFML_Animation_Cursoir
{
public:

	SFML_Animation_Cursoir(sf::Window* windows);

	void oneRun();
	void run();
	void wait();

	void setAnimation(Animation*);
	void setTextureTile(TextureTile*);
	void setDefauleFramePositionXY(sf::Vector2i XY );
	void setFrameTimeMilliseconds(int time);
	void setwindow(sf::Window* windows);


	
private:
	
	void TH_Func();
	sf::Window *win;
	Animation anime;
	sf::Thread *th;

};

