#pragma once
#include <SFML/Graphics.hpp>
using namespace sf;

namespace GamePlay {

	class Ball {
	private:
		CircleShape ball_circleShape_sprite;
		const float radius = 10.f;
		const float xPos = 230.f;
		const float yPos = 100.f;

		float ball_speed = 0.5f;
		Vector2f velocity = Vector2f(ball_speed, ball_speed);

		Texture ball_texture;
		String ball_texture_path = "Assets/Textures/Ball.png";

		Sprite ball_sprite;

		float ball_sprite_x_scale = 0.08f, ball_sprite_y_scale= 0.08f;
		

		void LoadTexture();
		void InitializeVariables();

	public:
		Ball();
		void Update();
		void Render(RenderWindow* gameWindow);
		void Move();

	};
}
