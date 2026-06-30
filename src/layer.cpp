#include "../include/layer.hpp"


layer::layer(int size)
{
	this->size = size;

	neuron *n = new neuron(0.000000000);
	for (int i = 0 ; i < size ; i++ ; )
	{
		this->neurons.push_back(n);

	}


}


layer::layer(int size,int activationVal)
{
	this->size = size;

	neuron *n = new neuron(0.000000000,activationVal);
	for (int i = 0 ; i < size ; i++ ; )
	{
		this->neurons.push_back(n);

	}


}

vector layer::getActivatedVals ()
{
	vector<double> ret;

	for ( int i = 0 ; i < this->neurons.size() ; i++) 
	{
		double v = this.neurons.at(i)->getActivatedVal();
		ret.push_back(v);
	}
	return ret;

}

matrix *layer::matrixifyVals()
{
	matrix *m = new matrix(1,this->neurons,size(),0);

	for (int i = 0 ; i < nthis->neurons.size() ; i++ ) 
	{
		m->setValue(0,1,this->neurons[i]->getVal()) ;
	}
	return m;

}
matrix *layer::matrixifyActivatedVals()
{
	matrix *m = new matrix(1,this->neurons,size(),0);

	for (int i = 0 ; i < nthis->neurons.size() ; i++ ) 
	{
		m->setValue(0,1,this->neurons[i]->getActivatedVal()) ;
	}
	return m;

}
matrix *layer::matrixifyderivedVals()
{
	matrix *m = new matrix(1,this->neurons,size(),0);

	for (int i = 0 ; i < nthis->neurons.size() ; i++ ) 
	{
		m->setValue(0,1,this->neurons[i]->getDerivededVal()) ;
	}
	return m;

}

