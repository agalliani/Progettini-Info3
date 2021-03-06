/*
 * Director.h
 *
 *  Created on: 15 Jul 2021
 *      Author: andre
 */

#ifndef HEADERS_DIRECTOR_H_
#define HEADERS_DIRECTOR_H_

#include "PlaneBuilder.h"

//definisce gli step con cui far costruire gli oggetti
class Director{
	PlaneBuilder *builder;
public:
	Aereo* creaAereo(PlaneBuilder *builder);
	AereoCombattimento* creaAereo(FightBuilder *builder);
};





#endif /* HEADERS_DIRECTOR_H_ */
