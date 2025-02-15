#pragma once
#include < SFML/Graphics.hpp>
#include "D:\unity\repos\SFML-Pong\Header\Core\GameWindowManager.h"
#include "D:\unity\repos\SFML-Pong\Header\Event\EventManager.h"
#include "D:\unity\repos\SFML-Pong\Header\GamePlay\GamePlayManager.h"
#include "D:/unity/repos/SFML-Pong/Header/Sound/SoundManager.h"

using namespace sf;
using namespace Core;
using namespace MyEvent;
using namespace std;
using namespace GamePlay;
using namespace Sound;

namespace Core {

	class GameLoop {

	private:
		GameWindowManager* game_Window_Manager;
		EventManager* event_Manager;
		GamePlayManager* gameplayManager;
		SoundManager* soundManager;

	public:

		void Initialize();
		void Update();
		bool IsGameRunning();
		void Render();
		void PollEvent();



	};


}