#ifndef _MATRIX_TO_VECTOR_HPP_
#define _MATRIX_TO_VECTOR_HPP


#include <iostream>
#include <vector>
#include <assert.h>
#include "../matrix.hpp"



namespace utils
{
class matrixToVector
{
	private:
		matrix *a;

	public:
		matrixToVector(matrix *a);
		vector<double> execute();


};
}


#endif

