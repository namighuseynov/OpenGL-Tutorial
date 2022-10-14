#include <iostream>
#include "Input.h"


float Input::GetAxis(unsigned int axis) {
	return InputValues::Get(axis);
}

void Input::Update(GLFWwindow* window) {
	if (glfwGetKey(window, GLFW_KEY_W) || glfwGetKey(window, GLFW_KEY_UP)) {
		InputValues::Set(INPUT_VERTICAL, 1.0f);
		std::cout << "here" << std::endl;
	}
	else {
		InputValues::Set(INPUT_VERTICAL, 0.0f);
	}
	if (glfwGetKey(window, GLFW_KEY_S) || glfwGetKey(window, GLFW_KEY_DOWN)) {
		InputValues::Set(INPUT_VERTICAL, -1.0f);
	}
	else {
		InputValues::Set(INPUT_VERTICAL, 0.0f);
	}
	if (glfwGetKey(window, GLFW_KEY_A) || glfwGetKey(window, GLFW_KEY_LEFT)) {
		InputValues::Set(INPUT_HORIZONTAL, -1.0f);
	}
	else {
		InputValues::Set(INPUT_HORIZONTAL, 0.0f);
	}
	if (glfwGetKey(window, GLFW_KEY_D) || glfwGetKey(window, GLFW_KEY_RIGHT)) {
		InputValues::Set(INPUT_HORIZONTAL, 1.0f);
	}
	else {
		InputValues::Set(INPUT_HORIZONTAL, 0.0f);
	}
	if (glfwGetKey(window, GLFW_KEY_ESCAPE)) {
		glfwSetWindowShouldClose(window, true);
	}
}