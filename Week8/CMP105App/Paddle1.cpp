#include "Paddle1.h"


Paddle1::Paddle1()
{
	// Init input component
	input = nullptr;

}

Paddle1::~Paddle1()
{
	input = nullptr;
}


void Paddle1::handleInput(float dt)
{

}

void Paddle1::update(float dt)
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

void Paddle1::collisionResponse(GameObject* collider)
{
	velocity.x = -velocity.x;
}