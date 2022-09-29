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
	void SetInt(const std::string& name, bool value) const;
	void SetFloat(const std::string& name, bool value) const;
public:

public:

private:
	unsigned int id;
	std::string LoadShaderSource(const char* path);
};




	




#endif



