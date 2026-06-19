#include "../include/layer.hpp"

matrix *layer::matrixifyVals()
{

	matrix *m = new matrix(1,this->neurons.size(),0);
	for ( int i = 0 ; i < this->neurons.size() ; i++)
		m->setVal(0,i,this->neurons[i]->getVal());
	return m;
}

matrix *layer::matrixifyActiveVals()
{

	matrix *m = new matrix(1,this->neurons.size(),0);
	for ( int i = 0 ; i < this->neurons.size() ; i++)
		m->setVal(0,i,this->neurons[i]->getActiveVal());
	return m;
}

matrix *layer::matrixifyDeriveVals()
{
	matrix *m = new matrix(1,this->neurons.size(),0);
	for ( int i = 0 ; i < this->neurons.size() ; i++)
		m->setVal(0,i,this->neurons[i]->getDeriveVal());
	return m;
}





layer::layer(int size){
	this->size = size;
	for (int i = 0; i < size ; i++)
	{
		neuron *n = new neuron(0.00);
		this->neurons.push_back(n);
	}
}

void layer::setVal(int idx, double val)
{
	this->neurons.at(idx)->setVal(val);
}
