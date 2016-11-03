#include <iostream>
#include "MatrixMxN.h"

int main()
{
	MatrixMxN<int> v1(3, 3);
	MatrixMxN<int> v2(3, 3);

	for (int i = 0; i < v1.m_; i++)
	{
		for (int j = 0; j < v1.n_; j++)
		{
			v1.v[i][j] = i*v1.n_ + j + 1;
		}
	}

	for (int i = 0; i < v2.m_; i++)
	{
		for (int j = 0; j < v2.n_; j++)
		{
			v2.v[i][j] = i*v2.n_ + j + 1;
		}
	}

	std::cout << "\nv1's vlaue\n";
	std::cout << v1;
	
	std::cout << "\nv2's vlaue\n";
	std::cout << v2;
	
	std::cout << "\nv1 + v2 vlaue\n";
	std::cout << v1 + v2;
	
	std::cout << "\nv1 - v2 vlaue\n";
	std::cout << v1 - v2;

	std::cout << "\nv1 * v2 vlaue\n";
	std::cout << v1 * v2;
	return 0;
}