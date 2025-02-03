#pragma once
#include <SFML/Graphics.hpp>

using namespace sf;

namespace GamePlay {

	class Paddle {

	private:
		RectangleShape paddle_Sprite;
		float width = 15;
		float height = 125;
		

	public:

		Paddle(float xPos, float yPos);

		void Update();
		void Render(RenderWindow* game_Window);
	};
}
