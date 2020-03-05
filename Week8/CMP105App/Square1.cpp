#include "Square1.h"


Square1::Square1()
{
	// Init input component
	input = nullptr;

}

Square1::~Square1()
{
	input = nullptr;
}


void Square1::handleInput(float dt)
{

}

void Square1::update(float dt)
{
	move(velocity * dt);

	if (getPosition().x < 0)
	{
		setPosition(0, getPosition().y);
		velocity.x = -velocity.x;
	}
	if (getPosition().x > 750)
	{
		setPosition(750, getPosition().y);
		velocity.x = -velocity.x;
	}
}

void Square1::collisionResponse(GameObject* collider)
{
	velocity.x = -velocity.x;
}