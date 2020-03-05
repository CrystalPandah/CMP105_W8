#include "Ball2.h"


Ball2::Ball2()
{




	// Init input component
	input = nullptr;


}

Ball2::~Ball2()
{
	input = nullptr;
}


void Ball2::handleInput(float dt)
{

}

void Ball2::update(float dt)
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

void Ball2::collisionResponse(GameObject* collider)
{
	velocity.x = -velocity.x;
}