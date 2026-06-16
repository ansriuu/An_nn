#include "../include/neuron.hpp"

// constructor 
neuron::neuron(double Val)
{
	this->Val = Val;
	activation_func();
	derive();

}

void neuron::activation_func()
{
	this->activeVal = this->Val / ( 1 + abs(this->Val));
}


void neuron::derive()
{
	this->deriveVal = this->activeVal * (1 - this->activeVal);

}
