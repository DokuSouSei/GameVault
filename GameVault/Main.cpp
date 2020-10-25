#include <iostream>

#include "GameVault.h"

int main(int argc, char** argv)
{

	std::cout << "Welcome to GameVault!" << std::endl;
	GameVault::Log::Init();
	GameVault::Log::s_SysLog->warn("Test Warning");
	GameVault::Log::s_SysLog->info("This is a test info log output");
	GameVault::Log::s_SysLog->critical("Line {0}",__LINE__);
	GameVault::Log::s_DevLog->critical("Test Dev Log");
	GameVault::Log::s_DevLog->warn("Uninitialized COMM @ LINE {0}", __LINE__);


	while (true)
	{
		// Keep Application Open
	}

	return 0;
}