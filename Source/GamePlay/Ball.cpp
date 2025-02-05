#include "D:\unity\repos\SFML-Pong\Header\GamePlay\Ball.h"
#include <iostream>

namespace GamePlay {
	void Ball::LoadTexture()
	{
		if (!ball_texture.loadFromFile(ball_texture_path))
		{
			throw std::runtime_error("unable to load ball texture");
		}
	}
	void Ball::InitializeVariables()
	{
		ball_sprite.setTexture(ball_texture);
		ball_sprite.setScale(ball_sprite_x_scale, ball_sprite_y_scale);
		ball_sprite.setPosition(xPos, yPos);
	}
	Ball::Ball()
	{
		/*ball_circleShape_sprite.setRadius(radius);
		ball_circleShape_sprite.setPosition(xPos, yPos);*/
		LoadTexture();
		InitializeVariables();

	}
	void Ball::Update()
	{
		Move();
	}
	void Ball::Render(RenderWindow* gameWindow)
	{
		gameWindow->draw(ball_sprite);
	}
	void Ball::Move()
	{
		ball_sprite.move(velocity);
	}
}
