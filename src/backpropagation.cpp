#include "../include/neural_net.hpp"

void neural_net::backpropagation()
{
	int outputLayerIdx = this->layers.size() -1 ;
	matrix *derivedValsYtoZ = this->layers.at(outputLayerIdx)->matrixifyDeriveVals();
	matrix *gradientValsYtoZ = new matrix(1,this->layers.at(outputLayerIdx)->getNeurons().size(),0);
	for (int i = 0 ; this->errors.size() ; i++ )
	{
		double d = derivedValsYtoZ->getVal(0,i);
		double e = this->errors.at(i);
		double g = d*e;
		gradientValsYtoZ->setVal(0,i,g); 
		
	}
	int lastHiddenLayerIdx = outputLayerIdx - 1;
	layer *lastHiddenLayer = this->layers.at(lastHiddenLayerIdx);
//	matrix *weightsOutputToHidden = this->weightmatrices.at(outputLayerIdx - 1 );
	matrix *deltaOutputToHidden = (new utils::multiplyMatrix(gradientValsYtoZ->transpose(),lastHiddenLayer->matrixifyActiveVals()))->utils::multiplyMatrix::execute();
		 
			
											
	for (int i = (lastHiddenLayerIdx) ; i >= 0 ; i--)
	{

	}

}

