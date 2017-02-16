/*
 * System.h
 *
 *  Created on: Feb 13, 2017
 *      Author: tom
 */

#ifndef SYSTEM_H_
#define SYSTEM_H_

#include "Atoms.h"

namespace std {

class System {
public:
	System();
	virtual ~System();


private:

	Atoms atoms;
	int n;//number of particles in system
	int density;//desired density
	int length;//Box length
	double temp;//Temperature
	double energy;//Total energy
	double kineticE;//Kinetic energy
	double potentialE;//Potential energy
	int d;//dimesion of system (2d or 3d)





};





}; /* namespace std */
#endif /* SYSTEM_H_ */
