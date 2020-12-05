-- Workspace - This is know as the Solution in VS
workspace "GameVault"

	--------------------------------------------------------------------------------------------------------
	-- Configurations --------------------------------------------------------------------------------------
	--------------------------------------------------------------------------------------------------------
	configurations { "Debug32", "Release32", "Debug64", "Release64" }
	
	filter "configurations:Debug*"
		defines "DEBUG"
		symbols "On"
		
	filter "configurations:Release*"
		defines "RELEASE"
		optimize "On"
		
	filter "configurations:*32"
		architecture "x86"
		
	filter "configurations:*64"
		architecture "x86_64"
	
	--------------------------------------------------------------------------------------------------------
	-- Platforms -------------------------------------------------------------------------------------------
	--------------------------------------------------------------------------------------------------------
	platforms { "Windows", "Linux", "Mac" }
	
	filter "platforms:Windows"
		system "windows"
		cppdialect "default"
		staticruntime "on"
		systemversion "latest"
		defines
		{
			"WINDOWS"
		}
		
	filter "platforms:Linux"
		system "linux"
		defines
		{
			"LINUX"
		}
		
	filter "platforms:Mac"
		system "macosx"
		defines
		{
			"MACOSX"
		}
		
	filter {}  -- Reset filter
	
	startproject "GameVault" -- Default project to load, VS only
	

-- Variable
outputdir = "%{cfg.platform}/%{cfg.buildcfg}" -- Example: \windows\Debug_x86_64\


--------------------------------------------------------------------------------------------------------
-- GameVault Project -----------------------------------------------------------------------------------
--------------------------------------------------------------------------------------------------------
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
		"%{wks.location}/3rdparty/spdlog/include",
		"%{wks.location}/3rdparty/wxWidget/include",
		"%{wks.location}/3rdparty/wxWidget/include/msvc"
	}
	
	libdirs
	{
		"%{wks.location}/3rdparty/wxWidget/lib/vc_lib/**" -- assumes 32bit for now
	}
		

		

		
	