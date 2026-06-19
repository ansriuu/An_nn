#include "../../include/utils/matrixToVector.hpp"

utils::matrixToVector::matrixToVector(matrix *a)
{
	this->a = a;
}

vector<double> utils::matrixToVector::execute()
{
	vector<double> res; 

	for (int i = 0 ; i < a->getRows() ; i++ )
		for ( int j = 0 ; j < a->getColumns() ; j++ ) 
			res.push_back(a->getVal(i,j));
	
	return res;

}
