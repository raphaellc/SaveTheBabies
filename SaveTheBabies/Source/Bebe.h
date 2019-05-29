#pragma once
#include "libUnicornio.h"
#include "GameObject.h"

class Bebe : public GameObject
{
public:
	Bebe();
	~Bebe();
	void setPosicaoGameObject(float x, float y) override;
	void setSpriteSheet(string sprite_sheet) override;
	void animaGameObject() override;
	void desenhaGameObject() override;
	void mover(int direcao) override;
	void setVelociadade(float vel);
	Sprite * getSprite() override;
	float getX() override;
	float getY() override;
	void update() override;
protected:
	bool salvo = true;
};

