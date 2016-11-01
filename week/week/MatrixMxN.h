#pragma once
#include "VectorND.h"

class MatrixMxN
{
public:
	VectorND *rows_;
	int m_, n_;

	MatrixMxN(const int& m, const int& n)
	{
		m_ = m;
		n_ = n;

		VectorND k(5);
		
		rows_ = (VectorND*)malloc(sizeof(VectorND)*m);
		for (int i = 0; i < n; i++)
		{
			rows_[i] = VectorND(5);
		}
	}

	VectorND operator*(const VectorND& rhs) {
		VectorND ans(n_);

		for (int i = 0; i < ans.num_; i++)
		{
			ans.v_[i] = rows_[i] * rhs;
		}

		return ans;
	}

	
};
/*
std::ostream& operator<<(std::ostream& os, const MatrixMxN& vec)
{
	for (int i = 0; i < vec.num_; i++)
	{
		os << vec.v_[i] << " ";
	}
	os << std::endl;

	return os;
}
*/