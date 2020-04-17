
#include <Gamen.h>

class Sandbox : public Gamen::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

Gamen::Application* Gamen::CreateApplication()
{
	return new Sandbox();
}