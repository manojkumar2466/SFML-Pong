#include "D:\unity\repos\SFML-Pong\Header\GameWindowManager.h"
namespace Core {
	void GameWindowManager::Initialize() {
		game_Window = new RenderWindow();
		CreateGameWindow();
	}

	void GameWindowManager::CreateGameWindow() {
		game_Window->create(VideoMode(game_Window_Width, game_Window_height), game_Title);
	}

	bool GameWindowManager::IsGameRunning() {
		return game_Window->isOpen();
	}

	void GameWindowManager::Render() {

	}

	RenderWindow* GameWindowManager::GetGameWindow() {
		return game_Window;
	}
}