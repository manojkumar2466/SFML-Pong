#pragma once
#include <SFML/Graphics.hpp>
#include <string>

using namespace sf;

namespace UI {
	class UIService {

		
	private:
		Font font;

		Text left_score_text;
		Text right_score_text;

		String texture_path = "Assets/Fonts/Aloevera-OVoWO.ttf";

		int font_size = 40.f;
		Color font_color = Color::White;
		String intital_string = "00";

		float left_score_x_pos = 850.f;
		float left_score_y_pos = 25.f;

		float right_score_x_pos = 1000.f;
		float right_score_y_pos = 25.f;

		int player1_score = 0;
		int player2_score = 0;


		void  LoadFontTexture();

		void CreateLeftScoreText();

		void CreateRightScoreText();
		void Render(RenderWindow* gameWindow);

		void Initialize();
		void IncreasePlayer1Score();
		void IncreasePlayer2Score();

		String FormatString(int score);
		
	public:
		UIService();
		void Update(RenderWindow* gameWindow);
		

	};
}