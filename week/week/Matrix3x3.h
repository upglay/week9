#pragma once
#include "Vector3D.h"

class Matrix3x3
{
public:
	Vector3D row0, row1, row2;

	Matrix3x3(const Vector3D& _r0, const Vector3D& _r1, const Vector3D& _r2)
		:row0(_r0), row1(_r1), row2(_r2)
	{}

	Vector3D operator*(const Vector3D& rhs) {
		Vector3D ans;

		ans.x_ = row0 * rhs;
		ans.y_ = row1 * rhs;
		ans.z_ = row2 * rhs;
		
		return ans;
	}

};
