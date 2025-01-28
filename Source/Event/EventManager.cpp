#include "D:\unity\repos\SFML-Pong\Header\Event\EventManager.h"
namespace MyEvent {

	void EventManager::PollEvents(RenderWindow* game_Window)
	{
		sf::Event event;
		while (game_Window->pollEvent(event)) {

			if (IsKeyPressed(sf::Keyboard::Escape)) {
				game_Window->close();
			}
		}
	}

	bool EventManager::IsKeyPressed(sf::Keyboard::Key key)
	{
		return sf::Keyboard::isKeyPressed(key);
	}
}
