#pragma once
#include "Framework/GameObject.h"




class Paddle2 : public GameObject
{
public:
	Paddle2();
	~Paddle2();

	void handleInput(float dt);
	void update(float dt);

	void collisionResponse(GameObject* collider);


protected:


};


