#include "SFML_Animation_Cursoir.h"

void SFML_Animation_Cursoir::TH_Func () {

	const int MAX_TILE_X = (anime.textureTile.TextureSizeInPixe.x / anime.textureTile.TileSiezInPixe.x) - anime.DefauleFramePositionXY.x ;

	sf::Image allImage = anime.textureTile.texture.copyToImage();

	sf::Image *TileAllFrame;
	TileAllFrame = new sf::Image[MAX_TILE_X];

	sf::Cursor *tamp;
	tamp = new sf::Cursor[MAX_TILE_X];

	for (int i = 0; i < MAX_TILE_X; i++)
	{
		TileAllFrame[i].copy(
			allImage,
			0, 
			0,
			sf::IntRect(
				i * anime.textureTile.TileSiezInPixe.x,
				i * anime.textureTile.TileSiezInPixe.y,
				anime.textureTile.TileSiezInPixe.x,
				anime.textureTile.TileSiezInPixe.y),
			true);

		tamp[i].loadFromPixels(TileAllFrame[i].getPixelsPtr(),
			sf::Vector2u(
				anime.textureTile.TextureSizeInPixe.x,
				anime.textureTile.TextureSizeInPixe.y)
			, sf::Vector2u(0, 0));

	}


	while (anime.run || anime.oneRun)
	{
		anime.oneRun = false;
		for (int i = 0; i < MAX_TILE_X; i++)
		{

			win->setMouseCursor(tamp[i]);

			sf::sleep(sf::milliseconds(anime.FrameTimeMilliseconds));
		}
	}
	


}

SFML_Animation_Cursoir::SFML_Animation_Cursoir(sf::Window* windows) 
{
}

void SFML_Animation_Cursoir::oneRun()
{
	

}

void SFML_Animation_Cursoir::run()
{
}

void SFML_Animation_Cursoir::wait()
{
}

void SFML_Animation_Cursoir::setAnimation(Animation*)
{
}

void SFML_Animation_Cursoir::setTextureTile(TextureTile*)
{
}

void SFML_Animation_Cursoir::setDefauleFramePositionXY(sf::Vector2i XY)
{
}

void SFML_Animation_Cursoir::setFrameTimeMilliseconds(int time)
{
}

void SFML_Animation_Cursoir::setwindow(sf::Window* windows)
{
	
}
