/*
 * Builder.h
 *
 *  Created on: 15 Jul 2021
 *      Author: andre
 */

#ifndef HEADERS_PLANEBUILDER_H_
#define HEADERS_PLANEBUILDER_H_

#include "Aereo.h"
#include "AereoCombattimento.h"

//"Abstract" Class
class PlaneBuilder {

public:
	//costruttore
	PlaneBuilder();
	//distruttore
	virtual ~PlaneBuilder();

	//metodi astratti
	virtual void getPartsDone() = 0;
	virtual void buildBody()=0;
	virtual void buildEngine()=0;

	Aereo* getAereo();

protected:
	Aereo *_aereo;

};

// PlaneBuilder concrete class
// Sa solo come costruire un  Propeller Plane
class PropellerBuilder: public PlaneBuilder {
public:
	void getPartsDone();
	void buildEngine();
	void buildBody();
	~PropellerBuilder();
};

// PlaneBuilder concrete class
// Sa solo come costruire un Jet Plane
class JetBuilder: public PlaneBuilder {
public:
	void getPartsDone();
	void buildEngine();
	void buildBody();
	~JetBuilder();
};

// PlaneBuilder concrete class
// Sa solo come costruire un Fight Plane
class FightBuilder: public PlaneBuilder {
	AereoCombattimento *_f_aereo;
public:
	void getPartsDone();
	void buildEngine();
	void buildBody();
	~FightBuilder();
	AereoCombattimento* getAereo();

};

#endif /* HEADERS_PLANEBUILDER_H_ */
