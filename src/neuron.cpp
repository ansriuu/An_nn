#include "../include/neuron.hpp"

void neuron::setVal(double val)
{
	this->val = val;
	activate();
	derive();

}

void neuron::activate()
{
	if(activationVal== TANH){
		this->activeVal = tanh(this->val);
	}
	else if(activationVal == RELU ){
		if ( this->val > 0 )
			this->activeVal =  this->val;
		else 
			this->activeVal = 0;
	}
	else if (activationVal = SIGM ) {
		this->activeVal = (1 / ( 1 + exp(-this->val)));

	}

	else {
		this->activeVal = (1 / ( 1 + exp(-this->val)));

	}

}

void neuron::derive() 
{
	if(activationVal== TANH){
		this->deriveVal = ( 1 - (this->deriveVal * this->deriveVal ));
	}
	else if(activationVal == RELU ){
		if ( this->val > 0 )
			this->deriveVal =  1;
		else 
			this->deriveVal = 0;
	}
	else if (activationVal = SIGM ) {
		this->deriveVal = (this->activeVal *   (1 - this->activeVal));

	}
	else 
	{
		this->deriveVal = (this->activeVal *   (1 - this->activeVal));
	}
};
