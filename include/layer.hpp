#ifndef _LAYER_HPP_
#define _LAYER_HPP_

#include <iostream>
#include <neuron.hpp>
using namespace std;

class layer
{
	private:
		int size;

		vector<neuron *> neurons; 
	public:
		layer(int size);
		void setVal(vector<int idx, double val);

};




#endif
