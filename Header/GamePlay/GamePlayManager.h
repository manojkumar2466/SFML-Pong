#pragma once
#include <SFML/Graphics.hpp>

#include "Ball.h"
#include "Paddle.h"

namespace GamePlay {

	class GamePlayManager {

	private:
		float leftPaddle_X_Pos = 40.f;
		float leftPaddle_Y_Pos = 300.f;
		float rightPaddle_X_Pos = 1210.f;
		float rightPaddle_Y_Pos = 300.f;

		Ball* ball;
		Paddle* leftPaddle;
		Paddle* rightPaddle;

		void Initialize();

	public:

		GamePlayManager();
		void Update();
		void Render(RenderWindow* game_Window);
	};
}