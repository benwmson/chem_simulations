

#include "Atoms.h"

namespace std {

Atoms::Atoms(){
	n = 0, d = 0;
	R = Matrix(), V = Matrix(), F = Matrix(), V0 = Matrix();

}

Atoms::Atoms(const int& n, const int& d){
	this->n = n, this->d = d;

	R = Matrix(n,d), V = Matrix(n,d), F = Matrix(n,d), V0 = Matrix(n,d);
}



Atoms::~Atoms() {
	// TODO Auto-generated destructor stub
}

} /* namespace std */
