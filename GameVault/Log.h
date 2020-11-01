///////////////////////////////////////////////////////////////////////////////
//
// 2020 DokuSouSei, GameVault
//
// Logging System
//
// 01-NOV-2020
//

#pragma once

#include <memory>

#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"


//
// System logging macros
//
#define LOG_DIAG(...)		::Log::Client::systemLog->trace(__VA_ARGS__)
#define LOG_DEBUG(...)		::Log::Client::systemLog->debug(__VA_ARGS__)
#define LOG_INFO(...)		::Log::Client::systemLog->info(__VA_ARGS__)
#define LOG_WARN(...)		::Log::Client::systemLog->warn(__VA_ARGS__)
#define LOG_ERR(...)		::Log::Client::systemLog->error(__VA_ARGS__)
#define LOG_FATAL(...)		::Log::Client::systemLog->critical(__VA_ARGS__)

//
// NameSpace Log
//
namespace Log
{

	//
	// Class Client
	//
	class Client
	{
	public:
		static void Init();

		static std::shared_ptr<spdlog::logger> systemLog;
	};
}

