#include <iostream>
#include <vector>
#include "../include/neuron.hpp"
#include "../include/matrix.hpp"
#include "../include/neural_net.hpp"




using namespace std;

int main(int argc, char **argv) 
{
	// input
	neuron *n1 = new neuron(1.5);
	matrix *m = new matrix(3,2,1);
	m->printmatrix();
	cout << "transpose ----- " << endl;
	matrix *mt = m->transpose();
	mt->printmatrix();
//	cout << n1->getVal() << " " << n1->getActiveVal() <<" " <<n1->getDeriveVal()<< endl
	

	cout << "neural network"<< endl;
	vector<int> topology = {3,2,3};

	vector<double> input;
	input.push_back(1.3);
	input.push_back(2.0);
	input.push_back(1.0);

	neural_net *nn = new neural_net(topology);
	nn->setInput(input);
	nn->printnn();


	return 0;

}
