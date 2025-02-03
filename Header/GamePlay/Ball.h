#pragma once
#include <SFML/Graphics.hpp>
using namespace sf;

namespace GamePlay {

	class Ball {
	private:
		CircleShape ball_Sprite;
		const float radius = 10.f;
		const float xPos = 230.f;
		const float yPos = 100.f;
		
	public:
		Ball();
		void Update();
		void Render(RenderWindow* gameWindow);

	};
}
