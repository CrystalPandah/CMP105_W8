#pragma once
#include "Framework/GameObject.h"
#include "Framework/Animation.h"



class Ball: public GameObject
{
public:
	Ball();
	~Ball();

	void handleInput(float dt);
	void update(float dt);

	void collisionResponse(GameObject* collider);

protected:
	

};
