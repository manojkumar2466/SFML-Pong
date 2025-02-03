#include "D:\unity\repos\SFML-Pong\Header\GamePlay\Ball.h"

namespace GamePlay {

	Ball::Ball()
	{
		ball_Sprite.setRadius(radius);
		ball_Sprite.setPosition(xPos, yPos);

	}
	void Ball::Update()
	{
	}
	void Ball::Render(RenderWindow* gameWindow)
	{
		gameWindow->draw(ball_Sprite);
	}
}
