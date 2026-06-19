#include "../include/layer.hpp"

layer::layer(int size)
	this->size = size;
{
	for (int i - 0; i < size ; i++)
	{
		neuron *n = new neuron(0.00);
		this->neurons.push_back(n);
	}
}

void layer::setVal(int idx, double val)
{
	this->neurons.at(idx) = val;
}
