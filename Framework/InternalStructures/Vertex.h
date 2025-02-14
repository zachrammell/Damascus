//------------------------------------------------------------------------------
//
// File Name:	Vertex.h
// Author(s):	Jonathan Bourim (j.bourim)
// Date:        6/8/2020 
//
//------------------------------------------------------------------------------
#pragma once
namespace bk {
struct PosVertex
{
	glm::vec3 pos = glm::vec3(0.0f);
	inline static const uint32_t NUM_ATTRIBS = 1;
};


struct ColorVertex
{
	glm::vec3 pos;
	glm::vec3 color;

	inline static const uint32_t NUM_ATTRIBS = 2;
};

struct TexVertex
{
	glm::vec3 pos;
	glm::vec2 texPos;

	inline static const uint32_t NUM_ATTRIBS = 2;
};

struct Vertex
{
	glm::vec3 pos = {};
	glm::vec3 normal = {};
	glm::vec3 color = glm::vec3(1.0f);
	glm::vec2 texPos = {};

	bool operator==(const Vertex& other) const
	{
		return pos == other.pos && color == other.color && texPos == other.texPos;
	}

	inline static const uint32_t NUM_ATTRIBS = 4;
};

}