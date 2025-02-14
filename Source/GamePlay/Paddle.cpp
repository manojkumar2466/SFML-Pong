#include "D:/unity/repos/SFML-Pong/Header/GamePlay/Paddle.h"

namespace GamePlay {


	void GamePlay::Paddle::MovePaddle(bool up_key_pressed, bool down_key_pressed, TimeService* timeService)
	{
		if (up_key_pressed && paddle_Sprite.getPosition().y > top_boundary)
		{
			paddle_Sprite.move(0, -speed* timeService->GetDeltaTime());
		}
		else if (down_key_pressed && paddle_Sprite.getPosition().y < bottom_boundary)
		{
			paddle_Sprite.move(0, speed * timeService->GetDeltaTime());
		}
	}

	GamePlay::Paddle::Paddle(float xPos, float yPos)
	{
		paddle_Sprite.setSize(Vector2f(width, height));

		paddle_Sprite.setPosition(xPos, yPos);

	}

	void Paddle::Reset(float x_pos, float y_pos)
	{
		paddle_Sprite.setPosition(x_pos, y_pos);
	}

	RectangleShape GamePlay::Paddle::GetPaddleSprite()
	{
		return paddle_Sprite;
	}

	void GamePlay::Paddle::Update(bool up_key_pressed, bool down_key_pressed, TimeService* timeService)
	{
		MovePaddle(up_key_pressed, down_key_pressed, timeService);
	}

	void GamePlay::Paddle::Render(RenderWindow* game_Window)
	{
		game_Window->draw(paddle_Sprite);
	}


}
