/*
 * Atoms.h
 *
 *  Created on: Feb 1, 2017
 *      Author: tom
 */

#ifndef ATOMS_H_
#define ATOMS_H_

namespace std {

class Atoms {
public:
	Atoms();
	Atoms(const int& n, const int& d);
	int getN(){return n;}
	int getD(){return d;}
	Matrix getPositions(){return R;}
	Matrix getInitialVelocities(){return V0;}
	Matrix getForces(){return F;};

	virtual ~Atoms();



private:
	Matrix R,V,F,V0;//matrices to hold positions, velocities, forces
	int n,d;//number of particles and dimension (2d or 3d simulation)
};

} /* namespace std */
#endif /* ATOMS_H_ */
