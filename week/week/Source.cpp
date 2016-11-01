#include <iostream>
#include "VectorND.h"
#include "MatrixMxN.h"

int main()
{
	Vector3D v0( 1, 2, 3);

	//Vector3D v1 = Vector3D(4, 5, 6);
	//Vector3D v2(7,8,9);
	
	//Matrix3x3 m(v0, v1, v2);

	//Vector3D y = m * v0;
	//std::cout << y << std::endl;

	MatrixMxN m(5, 4);
	m.rows_[0].num_ = 5;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			m.rows_[i].v_[j] = 5*i + j + 1;
		}
	}

	VectorND v(5);
	v.v_[0] = 1;
	v.v_[1] = 2;
	v.v_[2] = 3;
	v.v_[3] = 4;
	v.v_[4] = 5;
	
	VectorND y(4);
	y = m * v;

	std::cout << y << std::endl;
	/*
	MatrixMxN m(5, 4);
	VectorND v(5);

	VectorND y = m * v;

	std::cout << y << std::endl;
	*/

	return 0;
}