#pragma once
#ifndef SHADER_H
	#define SHADER_H

#include "glad/glad.h"

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
public:

public:

private:
	int checkCompileOrLinkingError(const unsigned int& shaderOrProgram, const char* type);
	unsigned int id;
};




	




#endif



