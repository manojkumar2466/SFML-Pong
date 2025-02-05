#pragma once
#include <SFML/Graphics.hpp>

using namespace sf;

namespace GamePlay {

	class Paddle {

	private:
		RectangleShape paddle_Sprite;
		float width = 30;
		float height = 235;
		
		const float speed = 0.5f;
		void MovePaddle(bool up_key_pressed, bool down_key_pressed);

	public:

		Paddle(float xPos, float yPos);

		void Update(bool up_key_pressed, bool down_key_pressed);
		void Render(RenderWindow* game_Window);
	};
}
