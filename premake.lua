-- Solution
workspace "GameVault"
   configurations { "Debug_x86", "Release_x86", "Debug_x64", "Release_x64" }  
   startproject "GameVault" -- Default project to load, VS only
   
   -- Architecture
   filter "configurations:*x86" -- 32 bit
	architecture "x86"
   filter "configurations:*x64" -- 64 bit
	architecture "x86_64"
 
-- Variables
outputdir = "{cfg.system}/%{cfg.buildcfg}"

-- Project
project "GameVault"
	location "GameVault" -- Currentdir/GameVault/
	kind "ConsoleApp"
	language "C++"
	
	-- Build and intermediate directories
	targetdir ("%{wks.location}/Build/" .. outputdir .. "/%{prj.name}")
	objdir ("%{wks.location}/Intermediate/" .. outputdir .. "/%{prj.name}")
	
	-- Source files
	files
	{
		"%{prj.name}/**.h",
		"%{prj.name}/**.cpp"
	}
	
	includedirs
	{
		"%{wrk.location}/3rdparty/spdlog/include"
	}
	
	
	-- Filters
	filter "system:windows"
		cppdialect "Default"
		staticruntime "on"
		systemversion "Latest"
		
		defines
		{
			"WINDOWS"
		}
		
	filter "configurations:Debug*"
		defines "DEBUG"
		symbols "On"
		
	filter "configurations:Release*"
		defines "RELEASE"
		optimize "On"
		
	