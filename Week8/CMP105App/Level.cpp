#include "Level.h"
#include "Framework/Collision.h"

Level::Level(sf::RenderWindow* hwnd, Input* in)
{
	window = hwnd;
	input = in;

	// initialise game objects
	ballTexture.loadFromFile("gfx/Beach_Ball.png");
	ball.setSize(sf::Vector2f(100, 100));
	ball.setPosition(100, 100);
	ball.setPosition(300, 300);
	ball.setTexture(&ballTexture);
	ball.setInput(input);
	ball.setVelocity(100, 0);

	paddle1.setSize(sf::Vector2f(50, 200));
	paddle1.setCollisionBox(sf::FloatRect(0, 0, 50, 200));
	paddle1.setPosition(0, 0);
	paddle1.setVelocity(50, 0);
	paddle1.setFillColor(sf::Color::Red);

	paddle2.setSize(sf::Vector2f(50, 200));
	paddle2.setCollisionBox(sf::FloatRect(0, 0, 50, 200));
	paddle2.setPosition(0, 0);
	paddle2.setVelocity(50, 0);
	paddle2.setFillColor(sf::Color::Red);
}

Level::~Level()
{

}

// handle user input
void Level::handleInput(float dt)
{
	paddle1.handleInput(dt);
	paddle2.handleInput(dt);

}

// Update game objects
void Level::update(float dt)
{
	paddle1.update(dt);
	paddle2.update(dt);
	ball.update(dt);

	//check collisions between each paddle and the ball
	if (Collision::checkBoundingBox(&paddle1, &ball))
	{
		paddle1.collisionResponse(NULL);
		ball.collisionResponse(NULL);
	}
	if (Collision::checkBoundingBox(&paddle2, &ball))
	{
		paddle2.collisionResponse(NULL);
		ball.collisionResponse(NULL);
	}
	
	
	
		
		
}

// Render level
void Level::render()
{
	beginDraw();
	/*window->draw(ball);
	window->draw(ball2);*/

	window->draw(paddle1);
	window->draw(paddle2);
	window->draw(ball);
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