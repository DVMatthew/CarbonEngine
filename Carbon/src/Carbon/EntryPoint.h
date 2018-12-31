#pragma once

#ifdef CB_PLATFORM_WINDOWS

extern Carbon::Application * Carbon::CreateApplication();

int main(int argc, char** argv)
{

	Carbon::Log::Init();

	CB_CORE_WARN("Initialized Log!");
	int a = 5;
	CB_INFO("Hello! Var={0}", a);

	auto app = Carbon::CreateApplication();	
	app->Run();
	delete app;
}

#endif