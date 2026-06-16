#include <iostream>
#include "../include/neuron.hpp"




using namespace std;

int main(int argc, char **argv) 
{

	// input
	neuron *n1 = new neuron(1.5);;


	cout << n1->getVal() << " " << n1->getActiveVal() <<" " <<n1->getDeriveVal()<< endl;

	return 0;

}
