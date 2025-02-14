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

	UIService::UIService()
	{
		Initialize();
	}

	void UIService::Update(RenderWindow* gameWindow)
	{
		Render(gameWindow);
	}
	
}