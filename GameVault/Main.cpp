///////////////////////////////////////////////////////////////////////////////
//
// 2020 DokuSouSei, GameVault
//
// Application Startup
//
// 01-NOV-2020
//

#include <iostream>

#include "GameVault.h"

///////////////////////////////////////////////////////////////////////////////
//
// Main
//
// The Big Bahoola!
//
int main(int argc, char** argv)
{

	std::cout << "Welcome to GameVault!" << std::endl;
	
	// Initialized logging
	Log::Client::Init();

	// Test logging
	LOG_DIAG("This is a test Log");
	LOG_DEBUG("This is a test Log");
	LOG_INFO("This is a test Log");
	LOG_WARN("This is a test Log");
	LOG_ERR("This is a test Log");
	LOG_FATAL("This is a test Log");

	
	while (true)
	{
		// Keep Application Open
	}

	// Close application when done
	return 0;
}