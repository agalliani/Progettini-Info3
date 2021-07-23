#include <iostream>
using namespace std;
#include "../include/MezzoTrasporto.h"

//costruttore
MezzoTrasporto::MezzoTrasporto() {
	this->_str = "mzxTrs";

	cout << "Costruttore MezzoTrasporto" << endl;
}

//distruttore virtual: chiamo i distruttori delle sotto-classi
MezzoTrasporto::~MezzoTrasporto() {
	cout << "~MezzoTrasporto" << endl;
}

//metodi
string MezzoTrasporto::getStr() {
	return _str;
}

void MezzoTrasporto::show() const {
	cout << "MezzoTrasporto::show --> str = " << _str << endl;
}

void MezzoTrasporto::metodoOverload(int x){
	cout<<"Overload int: "<<x<<endl;
}

void MezzoTrasporto::metodoOverload(string x){
	cout<<"Overload string: "<<x<<endl;
}

