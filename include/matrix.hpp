#ifndef _MATRIX_HPP_
#define _MATRIX_HPP_

#include <iostream>
#include <vector>
#include <random>

using namespace std;

class matrix
{
	private:
		int rows,columns;
		vector<vector<double>> values;
		
	public:
	
		// if isRandom in 0 then we intialise with all values as 0
		matrix(int rows, int columns,bool isRandom);
		matrix *transpose();

		void setVal(int r, int c, double v);
		double getVal(int r, int c);
		double RandNumGen();
		int getRows(){return rows;}
		int getColumns(){return columns;}

		void printmatrix();
};



#endif
