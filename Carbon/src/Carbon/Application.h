#pragma once

#include "Core.h"

namespace Carbon {

	class CARBON_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in CLIENT
	Application* CreateApplication();

}