#pragma once

#ifdef CB_PLATFORM_WINDOWS

extern Carbon::Application * Carbon::CreateApplication();

int main(int argc, char** argv)
{
	printf("Carbon Engine\n");
	auto app = Carbon::CreateApplication();
	app->Run();
	delete app;
}

#endif