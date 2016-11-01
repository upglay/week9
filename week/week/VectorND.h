#pragma once
#pragma once
#include <iostream>
#include <stdlib.h>
#include <vector>

class VectorND
{
public:
	int *v_;
	int num_;

	VectorND(const int& number)
	{
		num_ = number;
		v_ = (int*)malloc(sizeof(int)*number);
	}
	
	VectorND operator+(const VectorND& input) {
		
		VectorND vec(num_);

		for (int i = 0; i < num_; i++)
		{
			vec.v_[i] = input.v_[i];
		}

		return vec;
	}

	int operator*(const VectorND& input) {
		int ans = 0;

		for (int i = 0; i < num_; i++)
		{
			ans += this->v_[i] * input.v_[i];
		}return ans;
	}



};

std::ostream& operator<<(std::ostream& os, const VectorND& vec)
{
	for (int i = 0; i < vec.num_; i++)
	{
		os << vec.v_[i] << " ";
	}
	os << std::endl;

	return os;
}


