#pragma once


#ifdef GM_PLATFORM_WINDOWS

extern Gamen::Application* Gamen::CreateApplication();

int main(int argc, char** argv)
{
	printf("Gamen engine\n");
	auto app = Gamen::CreateApplication();
	app->Run();
	delete app;
}

#endif