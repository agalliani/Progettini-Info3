/*
 * Aereo.h
 *
 *  Created on: 15 Jul 2021
 *      Author: andre
 */

#ifndef HEADERS_AEREO_H_
#define HEADERS_AEREO_H_

#include "MezzoTrasporto.h"

class Aereo: private MezzoTrasporto {
public:
	//costruttore
	Aereo(string tipoAereo);
	//distruttore
	virtual ~Aereo();

	//metodi
	void setEngine(string type);
	void setBody(string body);
	string getEngine();
	string getBody();

	void show();

private:
	string _plane;
	string _body;
	string _engine;

};

#endif /* HEADERS_AEREO_H_ */
