#pragma once
#ifndef INPUT_H
	#define INPUT_H
#endif // INPUT_H

#ifndef GLFW_INCLUDE
	#define GLFW_INCLUDE
	#include "glad/glad.h"
	#include "GLFW/glfw3.h"
#endif // !GLFW_INCLUDE

#include "Global/InputValues.h"



class Input final {
public:
	static float GetAxis(unsigned int axis);
	static void Update(GLFWwindow* window);
};


#define INPUT_VALUES_CLASS

