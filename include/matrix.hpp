#ifndef _MATRIX_HPP_
#define _MATRIX_HPP_

#include <iostream>
#include <vector>
#include <random>
#include <iomanip>

using namespace std;

class matrix
{
private:
	vector<vector <double> > values;
	int numRows,numColumns;
	double generateRandomNum();

public:
	matrix(int numRows, int numColumns, bool isRandom);

	matrix *transpose();
	matrix *copy();

	void setValue(int r,int c, double v) {this->values[r][c] = v;}
	double getValue(int r, int c) {return this->values[r][c];}
	int getNumRows() {return this->numRows;}
	int getNumcolumns() {return this->numColumns;}

	void printToConsole();



};


#endif










