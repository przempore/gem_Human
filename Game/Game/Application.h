#pragma once

#include <gem/Application.hpp>

namespace Human
{
	class Game : public Gem::Application
	{
	public:
		/*Game();
		virtual ~Game();*/

	public:
		virtual void OnStartup() override;
		virtual void OnShutdown() override;
		virtual void OnUpdate(float dt) override;
		virtual void OnDraw(Gem::Graphics& graphics) override;
		virtual void OnEvent(Gem::Event event) override;
		virtual void OnInput(Gem::Input input) override;
	};
}