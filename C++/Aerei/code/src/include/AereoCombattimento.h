#ifndef HEADERS_AEREOCOMBATTIMENTO_H_
#define HEADERS_AEREOCOMBATTIMENTO_H_
#include <iostream>
#include <list>

using namespace std;
#include "Aereo.h"

class AereoCombattimento: public Aereo {
public:
	//costruttore
	AereoCombattimento(string tipoAereo);
	//distruttore
	~AereoCombattimento();

	//metodi
	void addWeapon(string arg);
	list<string> getWeapon();
	void printArmamento();

	//override
	void show();

private:
	list<string> armamento_base;


};

#endif /* HEADERS_AEREOCOMBATTIMENTO_H_ */
