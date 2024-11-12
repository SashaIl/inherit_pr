#pragma once
#include "Vehicle.h"
class Car : protected Vehicle
{
	const int capacity = 4;
public:
	Car( double consumption, double amortization, double DriverSalary, double distance) :
		Vehicle{ capacity ,consumption ,amortization ,DriverSalary ,distance } {}

	double PriceForTheCompany() {
		return Vehicle::PriceForTheCompany();
	}

	double PriceForHuman() {
		return Vehicle::PriceForHuman();
	}
};

