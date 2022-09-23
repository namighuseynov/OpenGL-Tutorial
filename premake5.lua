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
        systemversion "latest"
        links {"kernel32", "user32", "gdi32", "opengl32", "shell32", "GLFW/glfw3.lib"}

    filter "configurations:Release" 
        defines { "NDEBUG" }      
        optimize "On" 
        targetdir "bin/"
        objdir "bin-obj/" 
        
    includedirs {"Linking/include"}
    libdirs {"Linking/libs/GLFW"}


    

