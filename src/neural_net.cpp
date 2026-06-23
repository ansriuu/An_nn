#include "../include/neural_net.hpp"

neural_net::neural_net(vector<int> topology)
{
	this->topology = topology;
	this->topologySize = topology.size();

	for (int i = 0 ; i < topologySize ; i++){
		layer *l = new layer(topology.at(i));
		this->layers.push_back(l);
	}

	for (int i = 0 ; i < (topologySize - 1)   ; i++)	// no of wight matrices in the neural network is one less than the toplogy size 
	{
		// the rows of the wight matrix will equal the number of neurons to the left -- previous layer 
		matrix *m = new matrix(topology.at(i),topology.at(i+1),1); 
		this->weightmatrices.push_back(m);
	}


}

void neural_net::feedforward()
{
	for ( int i = 0 ; i < this->layers.size() - 1 ; i++)
	{
		matrix *a = this->getNeuronMatrix(i);

		if (i != 0 ) 
			a = this->getActivatedNeuronMatrix(i);

		matrix *b = this->getWeightMatrix(i);
		matrix *c = (new utils::multiplyMatrix(a,b))->utils::multiplyMatrix::execute();
	


		for (int j = 0 ; j < c->getColumns(); j++){
			this->setNeuronVal(i + 1 ,j, c->getVal(0,j));

		}
	}
}



void neural_net::setErr()
{
	int outputLayerIdx = this->layers.size() -1;
	if (this->target.size() == 0 ){
		cerr<<" no target for this neural network"<<endl;
		assert(false);
	}
	if (this->target.size() != this->layers.at(outputLayerIdx)->getNeurons().size()) 
	{
		cerr<<"target size is not the same as output layer's size: " << this->layers.at(outputLayerIdx)->getNeurons().size() << endl;
		assert(false);
	}

	this->error = 0.00;
	vector<neuron *> outputNeurons = this->layers.at(outputLayerIdx)->getNeurons();
	for (int i =0 ; i < target.size() ; i++)
	{
		double tempErr = (outputNeurons.at(i)->getActiveVal() - target.at(i)); 
		this->errors.push_back( tempErr);
		this->error += tempErr;
	}
	this->historicalErr.push_back(this->error);

}


void neural_net::setInput(vector<double> input)
{
	this->input = input;
	for ( int i = 0 ; i < input.size() ; i++ ) 
		this->layers.at(0)->setVal(i,input.at(i));
			
}

void neural_net::printnn()
{
	for (int i = 0; i < this->layers.size() ;i++)
	{
		cout << "layer : " << i <<  endl;
		if (i == 0 )
		{
			matrix *m = this->layers[i]->matrixifyVals();
			m->printmatrix();
			cout<<endl;
		}
		else 
		{
			matrix *m = this->layers[i]->matrixifyActiveVals();
			m->printmatrix();
			cout<<endl;
		}
	}

}
