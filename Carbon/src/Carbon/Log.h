#pragma once

#include <memory>
#include "Core.h"
#include "spdlog/spdlog.h"

namespace Carbon {

	class CARBON_API Log
	{ 

	public:

		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger;}

	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;

	};
}


// Core Log Macros

#define CB_CORE_TRACE(...) ::Carbon::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define CB_CORE_WARN(...)  ::Carbon::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define CB_CORE_INFO(...)  ::Carbon::Log::GetCoreLogger()->info(__VA_ARGS__)
#define CB_CORE_ERROR(...) ::Carbon::Log::GetCoreLogger()->error(__VA_ARGS__)
#define CB_CORE_FATAL(...) ::Carbon::Log::GetCoreLogger()->fatal(__VA_ARGS__)


// Client Log Macros

#define CB_TRACE(...) ::Carbon::Log::GetClientLogger()->trace(__VA_ARGS__)
#define CB_WARN(...)  ::Carbon::Log::GetClientLogger()->warn(__VA_ARGS__)
#define CB_INFO(...)  ::Carbon::Log::GetClientLogger()->info(__VA_ARGS__)
#define CB_ERROR(...) ::Carbon::Log::GetClientLogger()->error(__VA_ARGS__)
#define CB_FATAL(...) ::Carbon::Log::GetClientLogger()->fatal(__VA_ARGS__)
