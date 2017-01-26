

#ifndef MATRIX_H_
#define MATRIX_H_

using namespace std;

namespace std {

class Matrix {

private:
	int rows;
	int columns;

public:
	Matrix();//Default
	Matrix(const int& rows,const int& columns);//Normal person's constructor
	Matrix(const Matrix& rhs);//Copy constructor
	~Matrix();//Destructor

	int getRows(void){return rows;}
	int getColumns(void){return columns;}

	double **A; // the mother of all variables

};

} /* namespace std */
#endif /* MATRIX_H_ */
