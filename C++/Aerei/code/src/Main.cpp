/**Question: WHY Builder Design Pattern
 * Answer  : Because i want to build an object (plane) and it is composed of complex
 *            objects(body, engine,...) step by step.
 */

#include <iostream>
using namespace std;

#include "include/Director.h"

int main() {
	Director dir;
	JetBuilder jb;
	PropellerBuilder pb;
	FightBuilder fb;

	Aereo *jet = dir.creaAereo(&jb);
	Aereo *pro = dir.creaAereo(&pb);
	AereoCombattimento *fight = dir.creaAereo(&fb);

	cout << endl << "METODI SHOW:" << endl;
	jet->show();
	pro->show();
	fight->show();

	cout << endl << endl << endl;

	fight->printArmamento();
	fight->addWeapon("bomba atomica");
	fight->printArmamento();


	cout << endl << endl << endl;
	cout<<"OVERRIDE metodo show Aereo->AereoCombattimento:"<<endl;
	fight->show();
	cout << endl << endl << endl;



	MezzoTrasporto *m = new MezzoTrasporto();
	m->show();
	cout << endl << endl << endl;
	m->metodoOverload(10);
	m->metodoOverload("prova overload");
	cout << endl << endl << endl;


	//delete jet; //distruttori dei builder chiamano delete dell'aereo
	//delete pro;
	cout << endl << "USCITA DEL MAIN (auto-chiamata distruttori):" << endl;

	return 0;
}
