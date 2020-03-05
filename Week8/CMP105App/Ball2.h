#pragma once
#include "Framework/GameObject.h"
#include "Framework/Animation.h"



class Ball2 : public GameObject
{
public:
	Ball2();
	~Ball2();

	void handleInput(float dt);
	void update(float dt);

	void collisionResponse(GameObject* collider);

protected:


};
