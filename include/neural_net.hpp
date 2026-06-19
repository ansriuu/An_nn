#ifndef _NEURAL_NET_HPP_
#define _NEURAL_NET_HPP_

#include <iostream>
#include "layer.hpp"
#include <vector>
#include "matrix.hpp"
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
		

};




#endif
