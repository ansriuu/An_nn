#include "../../include/utils/multiplyMatrix.hpp"

utils::multiplyMatrix::multiplyMatrix(matrix *a , matrix *b) 
{
	this->a = a;
	this->b = b;
	if (a->getColumns() != b->getRows())
	{
		cerr << "rows column mismatch for multiplication" << endl;
		assert(0);
	}
	this->c = new matrix(a->getRows(),b->getColumns(),0);

}

matrix *utils::multiplyMatrix::execute()
{
	for (int i = 0 ; i < a->getRows() ; i++ ){
		for  (int j =0 ; j < a->getColumns() ; j++ ){
			for (int k = 0 ; k < b->getColumns() ; k++ ){ 
				double p = a->getVal(i,j)*b->getVal(j,k);
				double currval  = p + this->c->getVal(i,k);
				this->c->setVal(i,k,currval);
			}
		}
	}
	return this->c;
}
