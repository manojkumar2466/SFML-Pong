#include "D:/unity/repos/SFML-Pong/Header/UI/UIService.h"

namespace UI {

	void UIService::LoadFontTexture()
	{
		font.loadFromFile(texture_path);
	}

	void UIService::CreateLeftScoreText()
	{
		left_score_text.setFont(font);
		left_score_text.setString(intital_string);
		left_score_text.setCharacterSize(font_size);
		left_score_text.setFillColor(font_color);
		left_score_text.setPosition(left_score_x_pos, left_score_y_pos);
	}

	void UIService::CreateRightScoreText()
	{
		right_score_text.setFont(font);
		right_score_text.setString(intital_string);
		right_score_text.setCharacterSize(font_size);
		right_score_text.setFillColor(font_color);
		right_score_text.setPosition(right_score_x_pos, right_score_y_pos);
	}

	void UIService::Render(RenderWindow* gameWindow) {

		gameWindow->draw(left_score_text);
		gameWindow->draw(right_score_text);

	}

	void UIService::Initialize()
	{
		LoadFontTexture();
		CreateLeftScoreText();
		CreateRightScoreText();
	}

	void UIService::IncreasePlayer1Score()
	{
		player1_score++;
	}

	void UIService::IncreasePlayer2Score()
	{

		player2_score++;

	}

	String UIService::FormatString(int score)
	{
		return (score < 10 ? "0" : "") + std::to_string(score);
	}

	UIService::UIService()
	{
		Initialize();
	}

	void UIService::Update()
	{
		left_score_text.setString(FormatString(player1_score));
		right_score_text.setString(FormatString(player2_score));
	}
	
}