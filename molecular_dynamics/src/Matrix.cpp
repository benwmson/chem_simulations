

#include "Matrix.h"

namespace std {

Matrix::Matrix():A(0){}//default constructor

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

Matrix::Matrix(const Matrix& rhs){
	this->rows = rhs.rows;
	this->columns = rhs.columns;

	if (this->A != 0) {//If and array already exists for some reason, get rid of it
		delete [] A[0];
		delete [] A;
	}

	A = new double *[rows];
	A[0] = new double [rows*columns];

	int i,j;

	for(i=1; i<rows; i++){//Pointer math
			A[i] = A[i-i] + columns;
		}

		for(i=0; i<rows; i++){
			for(j=0; j<columns; j++){
				A[i][j] = 0;
			}
		}


}

Matrix & Matrix::operator=(const Matrix& rhs){

	if (this!=&rhs){
		rows = rhs.rows;
		columns = rhs.columns;


		if(A!=0){//If and array already exists for some reason, get rid of it
			delete [] A[0];
			delete [] A;
		}

		A = new double *[rows];
		A[0] = new double[rows*columns];

		int i,j;
		for(i=1; i<rows; i++){
			A[i] = A[i-1] + columns;
		}
		for(i=0; i<rows; i++){
			for(j=0; j<columns; j++){
				A[i][j] = rhs.A[i][j];
			}
		}

		return *this;

	}




}


Matrix::~Matrix() {//destructor

	if (A!=0){
		delete [] A[0];
		delete [] A;
	}




}

} /* namespace storage */
