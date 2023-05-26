#include <KaitekinaFune.h>

class Sandbox : public KaitekinaFune::Application 
{
public:
		Sandbox()
		{

		}
		~Sandbox()
		{

		}
};

KaitekinaFune::Application* KaitekinaFune::CreateApplication()
{
	return new Sandbox();
}