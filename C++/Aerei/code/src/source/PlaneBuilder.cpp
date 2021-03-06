#include <iostream>
using namespace std;
#include "../include/PlaneBuilder.h"
#include "../include/AereoCombattimento.h"

//costruttore
PlaneBuilder::PlaneBuilder() {
	_aereo = 0;
	cout << "Costruttore PlaneBuilder" << endl;
}

PlaneBuilder::~PlaneBuilder() {
	cout << "Distruttore PlaneBuilder" << endl;
}

Aereo* PlaneBuilder::getAereo() {
	return _aereo;
}

// PlaneBuilder concrete class
// Sa solo come costruire un  Propeller Plane

void PropellerBuilder::getPartsDone() {
	_aereo = new Aereo("Propeller Plane");
}
void PropellerBuilder::buildEngine() {
	_aereo->setEngine("Propeller Engine");
}
void PropellerBuilder::buildBody() {
	_aereo->setBody("Propeller Body");
}
PropellerBuilder::~PropellerBuilder() {
	delete _aereo;
}

// PlaneBuilder concrete class
// Sa solo come costruire un Jet Plane

void JetBuilder::getPartsDone() {
	_aereo = new Aereo("Jet Plane");
}
void JetBuilder::buildEngine() {
	_aereo->setEngine("Jet Engine");
}
void JetBuilder::buildBody() {
	_aereo->setBody("Jet Body");
}
JetBuilder::~JetBuilder() {
	delete _aereo;
}

// PlaneBuilder concrete class
// Sa solo come costruire un Fight Plane
void FightBuilder::getPartsDone() {
	_f_aereo = new AereoCombattimento("Fight Plane");
}
void FightBuilder::buildEngine() {
	_f_aereo->setEngine("Jet Engine");
}
void FightBuilder::buildBody() {
	_f_aereo->setBody("Fight Body");
}

//distruttore
FightBuilder::~FightBuilder() {
	cout << "Distrutto un FightBuilder" << endl;
	delete _f_aereo;
}

AereoCombattimento* FightBuilder::getAereo() {
	return _f_aereo;
}

