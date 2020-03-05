#include "Level.h"
#include "Framework/Collision.h"

Level::Level(sf::RenderWindow* hwnd, Input* in)
{
	window = hwnd;
	input = in;

	// initialise game objects
	ballTexture.loadFromFile("gfx/Beach_Ball.png");
	ball.setSize(sf::Vector2f(100, 100));
	ball.setPosition(300, 300);
	ball.setTexture(&ballTexture);
	ball.setInput(input);
	ball.setVelocity(100, 0);

	//ballTexture.loadFromFile("gfx/Beach_Ball.png");
	ball2.setSize(sf::Vector2f(100, 100));
	ball2.setPosition(800, 300);
	ball2.setTexture(&ballTexture);
	ball2.setInput(input);
	ball2.setVelocity(-100, 0);
}

//

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