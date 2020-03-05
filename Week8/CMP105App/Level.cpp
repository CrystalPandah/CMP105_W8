#include "Level.h"
#include "Framework/Collision.h"

Level::Level(sf::RenderWindow* hwnd, Input* in)
{
	window = hwnd;
	input = in;

	// initialise game objects

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
	ball.update(dt);
	ball2.update(dt);
	if (Collision::checkBoundingCircle(&ball, &ball2))
	{
		ball.collisionResponse(NULL);
		ball2.collisionResponse(NULL);

	}
		
		
}

// Render level
void Level::render()
{
	beginDraw();
	window->draw(ball);
	window->draw(ball2);

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