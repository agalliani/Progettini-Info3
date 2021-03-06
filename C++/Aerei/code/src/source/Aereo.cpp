#include <iostream>
using namespace std;
#include "../include/Aereo.h"

Aereo::Aereo(string tipoAereo) {
	this->_plane = tipoAereo;
	cout << "Costruttore Aereo" << endl;
}

Aereo::~Aereo() {
	cout << "Distruttore Aereo: " << _plane << endl;
}

void Aereo::setEngine(string engine) {
	_engine = engine;
}

void Aereo::setBody(string body) {
	_body = body;
}

string Aereo::getEngine() {
	return _engine;
}

string Aereo::getBody() {
	return _body;
}

void Aereo::show() {
		cout << "Plane Type: " << _plane << endl << "Body Type: " << _body
				<< endl << "Engine Type: " << _engine << endl << endl;
	}

