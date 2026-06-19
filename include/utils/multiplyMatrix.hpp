#ifndef _MULTIPLY_MATRIX
#define _MULTIPLY_MATRIX_HPP


#include <iostream>
#include <vector>
#include <assert.h>

#include "../matrix.hpp"

using namespace std;

namespace utils
{
	class multiplyMatrix
	{
		private:
			matrix *a,*b,*c;
		public:
			multiplyMatrix(matrix *a, matrix *b);

			matrix *execute();
	};
}




#endif 
