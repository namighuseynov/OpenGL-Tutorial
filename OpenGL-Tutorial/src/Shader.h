#pragma once
#ifndef SHADER_H
	#define SHADER_H
#endif

#ifndef GLM_INCLUDE
	#include "glm/glm.hpp"
	#include <glm/gtc/matrix_transform.hpp>
	#include <glm/gtc/type_ptr.hpp>
#endif // !GLM_INCLUDE

#ifndef GLFW_INCLUDE 

	#define GLFW_INCLUDE
	#include "glad/glad.h"
	#include "GLFW/glfw3.h"

#endif // !GLFW_INCLUDE 



#include <string>
#include <fstream>
#include <streambuf>
#include <sstream>
#include <iostream>



class Shader
{
public:
	

	Shader(const char* vertexShaderPath, const char* fragmentShaderPath);

	void Use();
	unsigned int GetId();
	void SetBool(const std::string& name, bool value) const;
	void SetInt(const std::string& name, int value) const;
	void SetFloat(const std::string& name, float value) const;
	void SetMat4(const char* uniformName, const glm::mat4& param);
public:

public:

private:
	int checkCompileOrLinkingError(const unsigned int& shaderOrProgram, const char* type);
	unsigned int id;
};