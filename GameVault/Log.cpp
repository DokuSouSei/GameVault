#include "Log.h"


namespace GameVault
{

	std::shared_ptr<spdlog::logger> Log::s_SysLog;
	std::shared_ptr<spdlog::logger> Log::s_DevLog;

	void Log::Init()
	{
		// Set Global Log Pattern
		spdlog::set_pattern("[%T] %^%l%$: %v");

		// Set System Log
		s_SysLog = spdlog::stdout_color_mt("SYSLOG");
		s_SysLog->set_level(spdlog::level::debug);

		// Set Development Log
		s_DevLog = spdlog::stdout_color_mt("DEVLOG");
		s_DevLog->set_pattern("\n//// DEVELOPMENT //////////////////////////////////////////////////////////////\n[%T]|%^%=40l%$| PROCESS %p | THREAD %t|\n[MESSAGE] %v");
		s_DevLog->set_level(spdlog::level::trace);
	}

}