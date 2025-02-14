#include "GamePlayManager.h"

namespace GamePlay {



	GamePlayManager::GamePlayManager(EventManager* event_manager)
	{
		this->event_manager = event_manager;
		boundary = new Boundary();
		timeService = new TimeService();
		timeService->Initialize();
		Initialize();
	}

	void GamePlayManager::Update()
	{
		UpdateScore();
		UI->Update();
		timeService->Update();
		ball->Update(leftPaddle, rightPaddle, timeService);
		leftPaddle->Update(event_manager->IsKeyPressed(sf::Keyboard::W),event_manager
		->IsKeyPressed(sf::Keyboard::S), timeService);
		rightPaddle->Update(event_manager->IsKeyPressed(sf::Keyboard::Up), event_manager
			->IsKeyPressed(sf::Keyboard::Down), timeService);
	}

	void GamePlay::GamePlayManager::Initialize()
	{
		ball = new Ball();
		UI = new UIService();
		leftPaddle = new Paddle(leftPaddle_X_Pos, leftPaddle_Y_Pos);
		rightPaddle = new Paddle(rightPaddle_X_Pos, rightPaddle_Y_Pos);


	}

	void GamePlayManager::UpdateScore()
	{
		if (ball->IsLeftCollisionOccured()) {
			UI->IncreasePlayer2Score();
			ball->UpdateLeftCollision(false);
			ResetGame();
		}
		else if (ball->IsRightCollisionOccured()) {
			UI->IncreasePlayer1Score();
			ball->UpdateRightCollision(false);
			ResetGame();
		}

	}

	void GamePlayManager::ResetGame()
	{
		leftPaddle->Reset(leftPaddle_X_Pos, leftPaddle_Y_Pos);
		rightPaddle->Reset(rightPaddle_X_Pos, rightPaddle_Y_Pos);
		
	}

	

	void GamePlayManager::Render(RenderWindow* game_Window)
	{
		UI->Render(game_Window);
		boundary->Render(game_Window);
		leftPaddle->Render(game_Window);
		rightPaddle->Render(game_Window);
		ball->Render(game_Window);
	}


	

	

}

