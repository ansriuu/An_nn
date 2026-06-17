#ifndef _NEURON_HPP_
#define _NEURON_HPP_

#include <iostream>
#include <math.h>
using namespace std;

class neuron
{
	private:
		double Val;
		double activeVal;
		double deriveVal;

	public:
		neuron(double Val);

		void setVal(double Val);

		// using the fast sigmoid fuction == as it is easier to find its derivative
		// f(x) = x / ( 1 + abs(x) )
		void  activation_func();

		// derivative for fast sigmoid function
		// f'(x) = f(x) * (1 - f(x))
		void derive();

		double getVal() { return this->Val;}
		double getActiveVal() { return this->activeVal;}
		double getDeriveVal() { return this->deriveVal;}


};




#endif
