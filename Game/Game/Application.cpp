#include "stdafx.h"
#include "Application.h"

namespace Human
{

	void Game::OnStartup()
	{
		printf("I'm in OnStartup()\n");
	}

	void Game::OnShutdown()
	{
		printf("I'm in OnShutdown()\n");
	}

	void Game::OnUpdate(float dt)
	{
	}

	void Game::OnDraw(Gem::Graphics& graphics)
	{
	}

	void Game::OnEvent(Gem::Event event)
	{
		printf("I'm in OnEvent()\n");
	}

	void Game::OnInput(Gem::Input input)
	{
		printf("I'm in OnInput()\n");

	}
}

namespace Gem
{
	ApplicationPtr CreateApplication()
	{
		return ApplicationPtr(new Human::Game);
	}
}
