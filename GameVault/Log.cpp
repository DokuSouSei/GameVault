///////////////////////////////////////////////////////////////////////////////
//
// 2020 DokuSouSei, GameVault
//
// Logging System
//
// 31-OCT-2020
//

#include "Log.h"

namespace Log
{
	// 
	std::shared_ptr<spdlog::logger> Client::systemLog;
	 
	//
	// Init: Logging Client
	//
	void Client::Init()
	{
		// Global log format
		spdlog::set_pattern("[%T] %^%l%$: %v");

		// Log type
		systemLog = spdlog::stdout_color_mt("SYSLOG");

		// Log Level
		systemLog->set_level(spdlog::level::debug);
	}

}