#ifndef _NEURAL_NET_HPP_
#define _NEURAL_NET_HPP_

#include <iostream>
#include <vector>
#include "layer.hpp"
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
		vector<matrix *> gradientmatrices;
		vector<double> input;

		double error;
		vector<double> target;
		vector<double> errors;
		vector<double> historicalErr;
	public:
		neural_net(vector<int> topology); 
		void setInput(vector<double> input);
		void setTarget(vector<double> target) {this->target = target;}
		void printnn();
		void feedforward();
		void setErr();
		void setNeuronVal(int layerIdx, int neuronIdx , double val) {this->layers.at(layerIdx)->setVal(neuronIdx,val); }
		void backpropagation(); 

		matrix *getNeuronMatrix(int idx) {return this->layers[idx]->matrixifyVals();}
		matrix *getActivatedNeuronMatrix(int idx) { return this->layers[idx]->matrixifyActiveVals(); }
		matrix *getderivedNeuronMatrix(int idx) { return this->layers[idx]->matrixifyDeriveVals(); }
		matrix *getWeightMatrix(int idx) { return this->weightmatrices[idx]; }

		double getTotalErr() {return this->error;} 
		vector<double> getErrs() {return this->errors;} 


};




#endif
