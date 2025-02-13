#include "D:/unity/repos/SFML-Pong/Header/Utility/TimeService.h"

namespace Utility {



	void TimeService::UpdateDeltaTime()
	{
		delta_time = CalculateDeltaTime();
		UpdatePreviousTime();
	}

	float TimeService::CalculateDeltaTime()
	{
		int delta = std::chrono::duration_cast<std::chrono::microseconds>(std::chrono::steady_clock::now() - previous_time).count();

		return static_cast<float>(delta) / 1000000;
	}

	void TimeService::UpdatePreviousTime()
	{
		previous_time = std::chrono::steady_clock::now();
	}

	void TimeService::Initialize()
	{
		previous_time = std::chrono::steady_clock::now();
		delta_time = 0;
	}

	void TimeService::Update()
	{
		UpdateDeltaTime();
	}

	float TimeService::GetDeltaTime()
	{
		return delta_time;
	}

}
