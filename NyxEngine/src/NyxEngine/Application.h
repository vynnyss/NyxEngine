#pragma once

#include "Core.h"

namespace NyxEngine {

	class NYXENGINE_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};
	
	// To be defined in Client
	Application* CreateApplication();

}
