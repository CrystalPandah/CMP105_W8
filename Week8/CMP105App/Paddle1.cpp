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
	if (input->isKeyDown(sf::Keyboard::Up) && !input->isKeyDown(sf::Keyboard::Down))
	{
		//Update x velocity
		velocity.x = 70;

		
	}
	else if (input->isKeyDown(sf::Keyboard::Down) && !input->isKeyDown(sf::Keyboard::Up))
	{
		//Update x velocity
		velocity.x = -70;

		
	}
	else
	{
		//Update x velocity
		velocity.x = 0;
	}

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