#ifndef _LAYER_HPP_
#define _LAYER_HPP_

#include <iostream>
#include "neuron.hpp"
#include "matrix.hpp"


class layer
{
	private:
		int size;
		vector<neuron *>  neurons;

	public:
		layer(int size);
		layer(int size,int activatonVal) ; void printToConsole();
		void setVal(int i,double v);

		matrix *matrixifyVals();
		matrix *matrixifyDerivedVals();
		matrix *matrixifyActivatedVals();

		vector<double> getActivatedVals();
		vector<neuron *> getNeurons(){ return this->neurons;}

		void setNeuron(vector<neuron *> neurons) {this->neurons = neurons;}
		


};


#endif 
