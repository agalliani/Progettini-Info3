#include <iostream>
using namespace std;
#include "../include/AereoCombattimento.h"

//costruttore
AereoCombattimento::AereoCombattimento(string tipoAereo) :
		Aereo(tipoAereo) {
	armamento_base = { "mitragliatore", "coppia missili" };
	cout << "Costruttore AereoCombattimento" << endl;
}

AereoCombattimento::~AereoCombattimento() {
	cout << "Distruttore AereoCombattimento" << endl;
}

void AereoCombattimento::addWeapon(string arg) {
	this->armamento_base.push_back(arg);
}

list<string> AereoCombattimento::getWeapon() {
	return this->armamento_base;
}

void AereoCombattimento::printArmamento() {
	cout << "AereoCombattimento weapons: ";
	for (string n : this->armamento_base) {
		cout << n << ",";
	}
	cout << endl;
}

void AereoCombattimento::show() {
		cout << "\nPlane Type: Aereo da Combattimento "<<endl;
		this->printArmamento();
	}

