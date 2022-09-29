#include "Shader.h"

Shader::Shader(const char* vertexShaderPath, const char* fragmentShaderPath) {
	unsigned int vertexShader, fragmentShader;
	vertexShader = glCreateShader(GL_VERTEX_SHADER);
	std::string vertexShaderSource = LoadShaderSource("assets/vertex_shader.glsl");
	const GLchar* vertexShaderSrc = vertexShaderSource.c_str();
	glShaderSource(vertexShader, 1, &vertexShaderSrc, NULL);
	glCompileShader(vertexShader);


}

void Shader::Use() {

}

unsigned int Shader::GetId() {
	return this->id;
}

void Shader::SetBool(const std::string& name, bool value) const {

}

void Shader::SetInt(const std::string& name, bool value) const {

}

void Shader::SetFloat(const std::string& name, bool value) const {

}

std::string Shader::LoadShaderSource(const char* path) {
	std::ifstream shaderFile;
	std::stringstream buf;
	std::string ret = "";
	shaderFile.open(path);
	if (shaderFile.is_open()) {
		buf << shaderFile.rdbuf();
		ret = buf.str();
	}
	else {
		std::cout << "Could not open" << path << std::endl;
	}
	shaderFile.close();
	return ret;
}
