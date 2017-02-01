

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
	Matrix & operator=(const Matrix& rhs);

	int getRows(void){return rows;}
	int getColumns(void){return columns;}
	void Set(int row, int column, double value);

	double **A; // the mother of all variables

};

} /* namespace std */
#endif /* MATRIX_H_ */
