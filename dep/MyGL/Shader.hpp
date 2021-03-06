#pragma once
#include <string>
#include <glm/glm.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <GL/glew.h>
namespace MyGL
{
	class Shader
	{
	private:
		bool inited = false;
		void init();
		void clear();
		std::string loadFile(const std::string &file);
		GLuint programId;
	public:
		~Shader();
		void LoadFromFile(const std::string &file, unsigned int mode);
		void Load(const std::string &source, unsigned int mode);
		GLint GetUniform(const std::string &str) const;
		GLint operator[] (const std::string &str) const;
		GLint GetAttribute(const std::string &str) const;
		void PassInt(const std::string &str, int i);
		void PassFloat(const std::string &str, float f);
		void PassMat4(const std::string &str, const glm::mat4 &matrix4);
		void PassMat3(const std::string &str, const glm::mat3 &matrix3);
		void PassVec4(const std::string &str, const glm::vec4 &vector4);
		void PassVec3(const std::string &str, const glm::vec3 &vector3);
		void Use();
	};
}
