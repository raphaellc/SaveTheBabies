#include "Spawner.h"
template <class T>
class SpawnerFor : public Spawner
{
public:
	GameObject* spawnGameObject() override;
};
template <class T>
GameObject* SpawnerFor<T>::spawnGameObject()
{
	return new T();
}
