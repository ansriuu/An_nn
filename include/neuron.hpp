#ifndef _NEURON_HPP_
#define _NEURON_HPP_


#define TANH 1 
#define RELU 2
#define SIGM 3 

#include <iostream>
#include <math.h>

class neuron
{
	private: 
		double val;
		double activeVal;
		double deriveVal;

		int activationVal; // according to the activation type 

	public:
		neuron(double val);
		neuron( double val,int activationType);

		void setVal(double val);
		void activate();
		void derive();

		double getActiveVal() { return this->activeVal; } 
		double getDeriveVal() {return this->deriveVal;}
		double getVal() {return this->val; }


};


#endif 
