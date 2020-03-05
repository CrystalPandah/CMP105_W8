#include "Paddle2.h"


Paddle2::Paddle2()
{
	// Init input component
	input = nullptr;

}

Paddle2::~Paddle2()
{
	input = nullptr;
}


void Paddle2::handleInput(float dt)
{

}

void Paddle2::update(float dt)
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

void Paddle2::collisionResponse(GameObject* collider)
{
	velocity.x = -velocity.x;
}