#include "D:\unity\repos\SFML-Pong\Header\GameWindowManager.h"
namespace Core {
	void GameWindowManager::Initialize() {
		game_Window = new RenderWindow();
		CreateGameWindow();
	}

	void GameWindowManager::CreateGameWindow() {
		game_Window->create(sf::VideoMode::getDesktopMode(), game_Title, sf::Style::Fullscreen);
	}

	bool GameWindowManager::IsGameRunning() {
		return game_Window->isOpen();
	}

	void GameWindowManager::Render() {

		game_Window->clear(sf::Color(100, 150, 150, 200));
		game_Window->display();
	}

	RenderWindow* GameWindowManager::GetGameWindow() {
		return game_Window;
	}
}