#include "D:/unity/repos/SFML-Pong/Header/Sound/SoundManager.h"

namespace Sound {

	sf::SoundBuffer SoundManager::ball_bounce;
	sf::Sound SoundManager::sound_effect;

	const std::string SoundManager::ball_bounce_sound_path = "Assets/Sounds/Ball_Bounce.wav";



	void SoundManager::Initialize()
	{
	}

	void SoundManager::LoadSoundFromFile()
	{
		if (!ball_bounce.loadFromFile(ball_bounce_sound_path))
		{
			std::cout << "Error loading ball bounce sound effect" << std::endl;
		}
	}

	SoundManager::SoundManager()
	{

	}

	void SoundManager::PlaySoundEffect(SoundType soundtype)
	{
		switch (soundtype) {
		case SoundType::ball_bounce:
			sound_effect.setBuffer(ball_bounce);
			break;

		default:
			std::cout << "invalid sound input"<<std::endl;
			break;
		}

		sound_effect.play();


	}

}