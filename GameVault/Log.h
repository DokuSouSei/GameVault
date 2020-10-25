#pragma once
#include <memory>

#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"

namespace GameVault
{
	class Log
	{
	public:
		static void Init(); // static in class shares this as the ONLY instance of this in all instances of the class

		static std::shared_ptr<spdlog::logger> s_SysLog;
		static std::shared_ptr<spdlog::logger> s_DevLog;
	};
}

