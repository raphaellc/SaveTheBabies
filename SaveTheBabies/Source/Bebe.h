#pragma once
#include "libUnicornio.h"
class Bebe
{
public:
	Bebe();
	~Bebe();
	void setPos(float x, float y);
	void setSpriteSheet(string sprite_sheet);
	void animarBebe();
	void desenharBebe();
	void mover(int direcao);
	void setVelociadade(float vel);
protected:
	Sprite sprite_bebe;
	float x, y, vel;
	bool salvo = true;
};

