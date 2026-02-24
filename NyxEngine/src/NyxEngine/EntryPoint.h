#pragma once

#ifdef NX_PLATFORM_WINDOWS

extern NyxEngine::Application* NyxEngine::CreateApplication();

int main(int argc, char** argv)
{
	auto app = NyxEngine::CreateApplication();
	app->Run();
	delete app;
}

#endif
