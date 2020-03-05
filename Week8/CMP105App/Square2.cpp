//#include "Square2.h"
//
//
//Square2::Square2()
//{
//	// Init input component
//	input = nullptr;
//
//}
//
//Square2::~Square2()
//{
//	input = nullptr;
//}
//
//
//void Square2::handleInput(float dt)
//{
//
//}
//
//void Square2::update(float dt)
//{
//	move(velocity * dt);
//
//	if (getPosition().x < 0)
//	{
//		setPosition(0, getPosition().y);
//		velocity.x = -velocity.x;
//	}
//	if (getPosition().x > 750)
//	{
//		setPosition(750, getPosition().y);
//		velocity.x = -velocity.x;
//	}
//}
//
//void Square2::collisionResponse(GameObject* collider)
//{
//	velocity.x = -velocity.x;
//}