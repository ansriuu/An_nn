#include "../include/neural_net.hpp"

neural_net::neural_net(vector<int> topology)
{
	this->topology = topology;
	this->topologySize = topology.size();

	for (int i = 0 ; i < topologySize ; i++){
		layer *l = new layer(topology.at(i));
		this->layers.push_back(l);
	}

	for (int i = 0 ; i < (topologySize - 1)   ; i++)	// no of wight matrices in the neural network is one less than the topology size 
	{
		// the rows of the wight matrix will equal the number of neurons to the left -- previous layer 
		matrix *m = new matrix(topology.at(i),topology.at(i+1),1); 
		this->weightmatrices.push_back(m);
	}


}

void neural_net::setInput(vector<double> input)
{
	this->input = input;
	for ( int i = 0 ; i < input.size() ; i++ ) 
		this->layers.at(0)->setVal(i,input.at(i));
			
}

void neural_net:: printnn()
{
	for (int i = 0; i < this->layers.size() ;i++)
	{
		cout << "layer : " << i <<  endl;
		if (i == 0 )
		{
			matrix *m = this->layers[i]->matrixifyVals();
			m->printmatrix();
		}
		else 
		{
			matrix *m = this->layers[i]->matrixifyActiveVals();
			m->printmatrix();
		}
	}

}
