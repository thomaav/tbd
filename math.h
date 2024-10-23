#pragma once

#include <cmath>

#include "raylib.h"

#include "map.h"

inline Vector2 operator-(const Vector2 &v1, const Vector2 &v2)
{
	return { v1.x - v2.x, v1.y - v2.y };
}

inline Vector2 operator+(const Vector2 &v1, const Vector2 &v2)
{
	return { v1.x + v2.x, v1.y + v2.y };
}

inline Vector3 operator+(const Vector3 &v1, const Vector3 &v2)
{
	return { v1.x + v2.x, v1.y + v2.y, v1.z + v2.z };
}

inline bool operator==(const Vector2 &v1, const Vector2 &v2)
{
	return v1.x == v2.x && v1.y == v2.y;
}

inline bool operator<(const Vector2 &v1, const Vector2 &v2)
{
	return v1.x < v2.x || (v1.x == v2.x && v1.y < v2.y);
}

static inline float length(Vector2 v)
{
	return std::sqrt(v.x * v.x + v.y * v.y);
}

static inline Vector2 normalize(Vector2 v)
{
	float length = std::sqrt(v.x * v.x + v.y * v.y);
	if (length > 0)
	{
		v.x /= length;
		v.y /= length;
	}
	return v;
}
