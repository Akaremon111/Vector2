#pragma once
template<typename T>
struct Vector2
{
	T x;
	T y;

	Vector2() noexcept = default;
	constexpr Vector2(const float& x, const float& y) noexcept : x(x), y(y) {};
	explicit constexpr Vector2(const float& f) noexcept : x(f), y(f) {};
};