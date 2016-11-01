#pragma once
#include <iostream>

class Vector3D
{
public:
	int x_, y_, z_;

	Vector3D()
		:x_(0), y_(0), z_(0)
	{}

	Vector3D(const int& _x, const int& _y, const int& _z)
		:x_(_x), y_(_y), z_(_z)
	{}

	Vector3D operator+(const Vector3D& input) {
		Vector3D vec;
		vec.x_ = this->x_ + input.x_;
		vec.y_ = this->y_ + input.y_;
		vec.z_ = this->z_ + input.z_;
		return vec;
	}

	int operator*(const Vector3D& input) {
		int ans;

		ans = this->x_ * input.x_;
		ans += this->y_ * input.y_;
		ans += this->z_ * input.z_;
		return ans;
	}

	
	
};

std::ostream& operator<<(std::ostream& os, const Vector3D& vec)
{
	os << vec.x_ << " " << vec.y_ << " " << vec.z_ << std::endl;

	return os;
}

