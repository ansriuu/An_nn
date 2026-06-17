#include "../include/matrix.hpp"


matrix::matrix(int rows, int columns, bool isRandom)
{
	this->rows = rows;
	this->columns = columns;

	for (int i = 0 ; i < rows ; i++)
	{
		vector<double> colvalues;
  		for (int j = 0 ; j  < columns  ; j++)
		{
			double r = 0.00;
			if (isRandom)
				r = this->RandNumGen();
			colvalues.push_back(r);
		}
		this->values.push_back(colvalues);
	//	colvalues.clear();
	}

}

void setVal(int r, int c, double v)
{

}

double matrix::RandNumGen()
{	
	// range 0 to 1 
        std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_real_distribution<> dis(0,1);

	return dis(gen);
	
}

void matrix::printmatrix()
{
	for (int i = 0 ; i < rows ; i++)
	{
  		for (int j = 0 ; j  < columns  ; j++)
		 	cout << this->values.at(i).at(j) << "\t\t";
		cout << endl;
	}
}

//void matrix::getVal(int r , int c)
