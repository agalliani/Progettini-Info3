#include <iostream>
using namespace std;
#include "../include/Director.h"

Aereo* Director::creaAereo(PlaneBuilder *builder) {
	builder->getPartsDone();
	builder->buildBody();
	builder->buildEngine();
	return builder->getAereo();
}
AereoCombattimento* Director::creaAereo(FightBuilder *builder) {
	builder->getPartsDone();
	builder->buildBody();
	builder->buildEngine();
	return builder->getAereo();
}
