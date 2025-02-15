#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
using namespace sf;

namespace Sound {
	enum class SoundType {
		ball_bounce,
		paddle_hit

	};
	
	class SoundManager {

	private:
		static sf::Music background_music;
		static sf::Sound sound_effect;
		static sf::SoundBuffer ball_bounce;

		static float	BGM_volume;
		static const std::string bgm_path;
		static const	std::string ball_bounce_sound_path;

		void Initialize();

		static void LoadSoundFromFile();

	public:
		SoundManager();
		~SoundManager();

		static void PlaySoundEffect(SoundType soundtype);
		static void PlayBGM();
	};
}
