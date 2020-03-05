#include "Level.h"
#include "Framework/Collision.h"

Level::Level(sf::RenderWindow* hwnd, Input* in)
{
	window = hwnd;
	input = in;

	// initialise game objects
	// bouncing squares 
	square1.setSize(sf::Vector2f(50, 50));
	square1.setCollisionBox(sf::FloatRect(0, 0, 50, 50));
	square1.setPosition(0, 200);
	square1.setVelocity(50, 0);
	square1.setFillColor(sf::Color::Blue);

	square2.setSize(sf::Vector2f(50, 50));
	square2.setCollisionBox(sf::FloatRect(0, 0, 50, 50));
	square2.setPosition(750, 200);
	square2.setVelocity(-50, 0);
	square2.setFillColor(sf::Color::Green);

	//
}

Level::~Level()
{

}

// handle user input
void Level::handleInput(float dt)
{

}

// Update game objects
void Level::update(float dt)
{
	square1.update(dt);
	square2.update(dt);

	if (Collision::checkBoundingBox(&square1, &square2))
	{
		square1.collisionResponse(NULL);
		square2.collisionResponse(NULL);
	}
	/*ball.update(dt);
	ball2.update(dt);
	if (Collision::checkBoundingCircle(&ball, &ball2))
	{
		ball.collisionResponse(NULL);
		ball2.collisionResponse(NULL);

	}*/
		
		
}

// Render level
void Level::render()
{
	beginDraw();
	/*window->draw(ball);
	window->draw(ball2);*/

	window->draw(square1);
	window->draw(square2);
	endDraw();
}

// Begins rendering to the back buffer. Background colour set to light blue.
void Level::beginDraw()
{
	window->clear(sf::Color(100, 149, 237));
}

// Ends rendering to the back buffer, and swaps buffer to the screen.
void Level::endDraw()
{
	window->display();
}