#pragma once
#include <iostream>
#include <stdlib.h>

template <typename T>
class MatrixMxN
{
public:
	int m_, n_;
	T **v;

	MatrixMxN(const int& _m, const int& _n)
		:m_(_m), n_(_n)
	{
		v = (T**)malloc(sizeof(T*)*m_);
		for (int i = 0; i < m_; i++)
		{
			v[i] = (T*)malloc(sizeof(T)*_n);
		}
	}

	MatrixMxN operator*(const MatrixMxN& input)
	{
		if (this->n_ != input.m_)
		{
			//error
			//return nullptr;
		}

		MatrixMxN output(this->m_, input.n_);
		for (int i = 0; i < output.m_; i++)
		{
			for (int j = 0; j < output.n_; j++)
			{
				output.v[i][j] = 0;
				for (int k = 0; k < this->n_; k++)
				{
					output.v[i][j] += this->v[i][k] * input.v[k][j];
				}
			}
		}
		return output;
	}

	MatrixMxN operator+(const MatrixMxN& input)
	{
		MatrixMxN output(this->m_, this->n_);
		for (int i = 0; i < output.m_; i++)
		{
			for (int j = 0; j < output.n_; j++)
			{
				output.v[i][j] = this->v[i][j] + input.v[i][j];
			}
		}

		return output;
	}

	MatrixMxN operator-(const MatrixMxN& input)
	{
		MatrixMxN output(this->m_, this->n_);
		for (int i = 0; i < output.m_; i++)
		{
			for (int j = 0; j < output.n_; j++)
			{
				output.v[i][j] = this->v[i][j] - input.v[i][j];
			}
		}
		return output;
	}
};

template<typename TT>
std::ostream& operator<<(std::ostream& os, const MatrixMxN<TT>& input)
{
	for (int i = 0; i < input.m_; i++)
	{
		for (int j = 0; j < input.n_; j++)
		{
			os << input.v[i][j] << " ";
		}
		os << std::endl;
	}
	return os;
}