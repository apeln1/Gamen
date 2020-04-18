#pragma once


#ifdef GM_PLATFORM_WINDOWS

extern Gamen::Application* Gamen::CreateApplication();

int main(int argc, char** argv)
{

	Gamen::Log::Init();

	GM_CORE_WARN("Initialized Log!");
	int a = 6;
	GM_INFO("Hello! var = {0}",a);
	auto app = Gamen::CreateApplication();
	app->Run();
	delete app;
}

#endif