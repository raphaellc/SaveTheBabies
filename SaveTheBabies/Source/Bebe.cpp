#include "Bebe.h"



Bebe::Bebe()
{
}


Bebe::~Bebe()
{
}

void Bebe::setPos(float x, float y)
{
	this->x = x;
	this->y = y;
}

void Bebe::setSpriteSheet(string sprite_sheet)
{
	sprite_bebe.setSpriteSheet(sprite_sheet);
}

void Bebe::animarBebe()
{
	sprite_bebe.avancarAnimacao();
}

void Bebe::desenharBebe()
{
	sprite_bebe.desenhar(x, y);
}
