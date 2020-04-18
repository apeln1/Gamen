#pragma once


#include <memory>
#include "Core.h"
#include "spdlog\spdlog.h"


namespace Gamen {
	class GAMEN_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }

	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};
}

// Core log macros
#define GM_CORE_ERROR(...)	::Gamen::Log::GetCoreLogger()->error(__VA_ARGS__)
#define GM_CORE_WARN(...)	::Gamen::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define GM_CORE_INFO(...)	::Gamen::Log::GetCoreLogger()->info(__VA_ARGS__)
#define GM_CORE_TRACE(...)	::Gamen::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define GM_CORE_FATAL(...)	::Gamen::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Client log macros
#define GM_ERROR(...)	::Gamen::Log::GetClientLogger()->error(__VA_ARGS__)
#define GM_WARN(...)	::Gamen::Log::GetClientLogger()->warn(__VA_ARGS__)
#define GM_INFO(...)	::Gamen::Log::GetClientLogger()->info(__VA_ARGS__)
#define GM_TRACE(...)	::Gamen::Log::GetClientLogger()->trace(__VA_ARGS__)
#define GM_FATAL(...)	::Gamen::Log::GetClientLogger()->fatal(__VA_ARGS__)
