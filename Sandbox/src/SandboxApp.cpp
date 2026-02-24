#include <NyxEngine.h>

class Sandbox : public NyxEngine::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}

};

NyxEngine::Application* NyxEngine::CreateApplication()
{
	return new Sandbox();
}