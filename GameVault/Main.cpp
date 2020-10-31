///////////////////////////////////////////////////////////////////////////////
//
// 2020 DokuSouSei, GameVault
//
// Application Startup
//
// 31-OCT-2020
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

	// Test log
	LOG_WARN("This is a test Log");
	LOG_WARN("This is a test Log");
	LOG_WARN("This is a test Log");
	LOG_WARN("This is a test Log");
	LOG_WARN("This is a test Log");
	LOG_WARN("This is a test Log");

	
	while (true)
	{
		// Keep Application Open
	}

	// Close application when done
	return 0;
}