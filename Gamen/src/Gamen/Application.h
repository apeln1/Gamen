#pragma once

#include "Core.h"
namespace Gamen
{

	class GAMEN_API Application
	{
	public:
		Application();
		virtual ~Application();
		void Run();



	};


	// To be defined in CLIENT
	Application* CreateApplication();
}

