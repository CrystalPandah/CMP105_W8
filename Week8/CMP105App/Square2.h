#pragma once
#include "Framework/GameObject.h"




class Square2 : public GameObject
{
public:
	Square2();
	~Square2();

	void handleInput(float dt);
	void update(float dt);

	void collisionResponse(GameObject* collider);

protected:


};

