workspace "OpenGL-Tutorial" 
    system "windows"
    architecture "x64"
    configurations "Release"
    location "OpenGL-Tutorial"

project "OpenGL-Tutorial"   
    kind "ConsoleApp"  
    language "C++"   
    files { "**.h", "**.c" }

    filter "system:windows" 
        cppdialect "C++17"
        staticruntime "On"
        systemversion "latest"

    filter "configurations:Release" 
        defines { "NDEBUG" }      
        optimize "On" 
        targetdir "bin/"
        objdir "bin-obj/" 
        
    -- filter "configurations:Debug" 
    --     defines { "DEBUG" }  
    --     symbols "On" 
    --     targetdir "bin/%{cfg.buildcfg}"
    --     objdir "bin-obj/%{cfg.buildcfg}"


    

