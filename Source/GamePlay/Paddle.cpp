#include "D:/unity/repos/SFML-Pong/Header/GamePlay/Paddle.h"

namespace Core {

}

GamePlay::Paddle::Paddle(float xPos, float yPos)
{
	paddle_Sprite.setSize(Vector2f(width, height));

	paddle_Sprite.setPosition(xPos, yPos);

}

void GamePlay::Paddle::Update()
{
}

void GamePlay::Paddle::Render(RenderWindow* game_Window)
{
	game_Window->draw(paddle_Sprite);
}
