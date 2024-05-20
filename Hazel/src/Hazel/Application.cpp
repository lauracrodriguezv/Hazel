#include "hzpch.h"
#include "Application.h"

#include "Log.h"
#include "Events/ApplicationEvent.h"
#include "Events/Event.h"

namespace Hazel
{
	Application::Application()
	{
		
	}

	Application::~Application()
	{
		
	}

	void Application::Run()
	{
		WindowsResizeEvent e(1280, 720);
		HZ_INFO(e);
		
		while (true);
	}
}