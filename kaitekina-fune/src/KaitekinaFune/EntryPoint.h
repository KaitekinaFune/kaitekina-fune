#pragma once

#ifdef KF_PLATFORM_WINDOWS

extern KaitekinaFune::Application* KaitekinaFune::CreateApplication();

int main(int argc, char** argv) 
{
	auto app = KaitekinaFune::CreateApplication();
	app->Run();
	delete app;
	return 0;
}
#endif 
