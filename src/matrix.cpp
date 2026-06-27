#include "../include/matrix.hpp"

matrix::matrix(int numRows, int numColumns, bool isRandom)
{
	this->numRows = numRows;
	this->numColumns = numColumns;

	
	for (int i = 0 ; i < this->numRows ; i++ ) {
		vector<double> colValues;

		for (int j = 0 ; j < this->numRows ; j++ ) {
			double r = (isRandom ? this->generateRandomNum() : 0.00) ;
			colValues.push_back(r);


			
		}

		this->values.push_back(colValues);
	}

	

}
double matrix::generateRandomNum()
{
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_real_distribution<> dis(-0.0001,0.0001);

	return dis(gen);

}

matrix *matrix::transpose()
{
	matrix *m = new matrix(this->numColumns,this->numRows,0);
	for (int i = 0 ; i < this->numRows ; i++ ) 
		for (int j = 0 ; j < this->numColumns ; j++ ) 
			m->setValue(j,i,this->getValue(i,j));

	return m;


}

matrix *matrix::copy()
{
	matrix *m = new matrix(this->numRows,this->numColumns,0);
	for (int i = 0 ; i < this->numRows ; i++ ) 
		for (int j = 0 ; j < this->numColumns ; j++ ) 
			m->setValue(i,j,this->getValue(i,j));

	return m;


}


void matrix::printToConsole()
{
	for (int i = 0 ; i < this->numRows ; i++ ) {
		for (int j = 0 ; j < this->numColumns ; j++ ) 
			cout << this->values[i][j] << "\t\t";
		cout << endl;
		}
}
 

