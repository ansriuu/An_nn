#include <iostream>
#include <vector>
#include "../include/neuron.hpp"
#include "../include/matrix.hpp"




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
//	cout << n1->getVal() << " " << n1->getActiveVal() <<" " <<n1->getDeriveVal()<< endl;

	return 0;

}
