#include <iostream>
#include <vector>
#include <stdio.h>
#include <fstream>
#include <streambuf>
#include <ostream>
#include <time.h>

#include "../include/matrix.hpp"
#include "../include/utils/math.hpp"

using namespace std;

int main(int argc, char **argv)
{	
for (int i = 0 ; i < 1000 ; i ++ ){
matrix *a = new matrix(100,100,1);
matrix *b = new matrix(100,100,1);

matrix *c = new matrix(100,100,0);

utils::math::multiplyMatrix(a,b,c);
cout << i<< endl;

}

return  0 ;
}
