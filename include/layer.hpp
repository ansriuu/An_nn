#ifndef _LAYER_HPP_
#define _LAYER_HPP_

#include <iostream>
#include "neuron.hpp"
#include "matrix.hpp"

using namespace std;

class layer
{
	private:
		int size;

		vector<neuron *> neurons; 
	public:
		layer(int size);
		void setVal(int idx, double val);
		matrix *matrixifyVals();
		matrix *matrixifyActiveVals();
		matrix *matrixifyDeriveVals();
};




#endif
