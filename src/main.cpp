#include <iostream>
#include <vector>
#include "../include/neuron.hpp"
#include "../include/matrix.hpp"
#include "../include/neural_net.hpp"




using namespace std;

int main(int argc, char **argv) 
{
	// input
	cout << "neural network"<< endl;
	vector<int> topology = {3,2,3};

	vector<double> input;
	input.push_back(1.0);
	input.push_back(0.0);
	input.push_back(1.0);

	neural_net *nn = new neural_net(topology);
	nn->setTarget(input);
	nn->setInput(input);
	nn->feedforward();
	nn->printnn();
	nn->setErr();
	nn->backpropagation();

  	nn->printnn();
	cout << "total err " << nn->getTotalErr()<<endl;

	return 0;

}
