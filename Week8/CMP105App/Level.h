#pragma once

#include <SFML/Graphics.hpp>
#include "Framework/Input.h"
#include <string>
#include <iostream>
#include "Paddle1.h"
#include "Paddle2.h"
#include "Ball.h"


class Level{
public:
	Level(sf::RenderWindow* hwnd, Input* in);
	~Level();

	void handleInput(float dt);
	void update(float dt);
	void render();

private:
	// Default functions for rendering to the screen.
	void beginDraw();
	void endDraw();

	// Default variables for level class.
	sf::RenderWindow* window;
	Input* input;

	Ball ball;
	//Ball2 ball2;
	sf::Texture ballTexture;

	Paddle1 paddle1;
	Paddle2 paddle2;
	
};