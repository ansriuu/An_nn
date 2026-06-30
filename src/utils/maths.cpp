#include "../../include/utils/math.hpp"


void utils::math::multiplyMatrix(matrix *a,matrix *b,matrix  *c)
{
	for(int i = 0 ; i < a->getNumRows() ; i++ ){
		for(int j = 0 ; j < b->getNumcolumns() ; j++ ){
			for(int k = 0 ; k < b->getNumRows() ; k++){
				double p = a->getValue(i,k) * b->getValue(k,j);
				double newVal = c->getValue(j,k) + p;
				c->setValue(i,j,newVal);
			}
		}
	}
}

 
