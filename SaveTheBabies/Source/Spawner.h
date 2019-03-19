#pragma once
#include "GameObject.h"
class Spawner
{
public:
	virtual ~Spawner();
	virtual GameObject* spawnGameObject();
};

