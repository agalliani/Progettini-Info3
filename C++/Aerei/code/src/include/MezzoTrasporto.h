
#ifndef HEADERS_MEZZOTRASPORTO_H_
#define HEADERS_MEZZOTRASPORTO_H_

#include <iostream>
using namespace std;

class MezzoTrasporto {
public:

	//costruttore
	MezzoTrasporto();

	//distruttore virtual: chiamo i distruttori delle sotto-classi
	virtual ~MezzoTrasporto();

	//metodi
	string getStr();

	virtual void show() const;

	void metodoOverload(int x);
	void metodoOverload(string x);

private:
	string _str;
};

#endif /* HEADERS_MEZZOTRASPORTO_H_ */
