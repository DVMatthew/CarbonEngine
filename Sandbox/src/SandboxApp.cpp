#include <Carbon.h>

class Sandbox : public Carbon::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}

};

Carbon::Application* Carbon::CreateApplication()
{
	return new Sandbox();
}