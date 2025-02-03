#include "GamePlayManager.h"

namespace GamePlay {



	GamePlayManager::GamePlayManager()
	{

		Initialize();
	}

	void GamePlayManager::Update()
	{
	}

	void GamePlay::GamePlayManager::Initialize()
	{
		ball = new Ball();

		leftPaddle = new Paddle(leftPaddle_X_Pos, leftPaddle_Y_Pos);
		rightPaddle = new Paddle(rightPaddle_X_Pos, rightPaddle_Y_Pos);


	}

	void GamePlayManager::Render(RenderWindow* game_Window)
	{
		leftPaddle->Render(game_Window);
		rightPaddle->Render(game_Window);
		ball->Render(game_Window);
	}


	

	

}

