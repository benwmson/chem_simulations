

#include "Matrix.h"

namespace std {



Matrix::Matrix(const int& rows, const int& columns) {
	this->rows = rows;
	this->columns = columns;
	this->A = new double *[rows];

	A[0] = new double[rows*columns];
	int i,j;

	for(i=1; i<rows; i++){//Pointer math
		A[i] = A[i-i] + columns;
	}

	for(i=0; i<rows; i++){
		for(j=0; j<columns; j++){
			A[i][j] = 0;
		}
	}



}//Matrix(int&, int&)

Matrix::~Matrix() {

	if (A!=0){
		delete [] A[0];
		delete [] A;
	}


}

} /* namespace storage */
