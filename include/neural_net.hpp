#ifndef _NEURAL_NET_HPP_
#define _NEURAL_NET_HPP_

#include <iostream>
#include "layer.hpp"
#include <vector>
#include "matrix.hpp"
#include "utils/multiplyMatrix.hpp"




using namespace std;

class neural_net
{
	private:
		int topologySize;
		vector<int> topology; // topology is just layers and the number of neurons in the layers
		vector<layer *> layers;
	       	vector<matrix *> weightmatrices;
		vector<double> input;
	public:
		neural_net(vector<int> topology); 
		void setInput(vector<double> input);
		void printnn();

		matrix *getNeuronMatrix(int idx) {return this->layers[idx]->matrixifyVals();}
		matrix *getActivatedNeuronMatrix(int idx) { return this->layers[idx]->matrixifyActiveVals(); }
		matrix *getderivedNeuronMatrix(int idx) { return this->layers[idx]->matrixifyDeriveVals(); }

		matrix *getWeightMatrix(int idx) { return this->weightmatrices[idx]; }
		

};




#endif
