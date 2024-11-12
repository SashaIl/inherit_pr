#pragma once
class Vehicle
{
	int capacity;
	double consumption;
	double amortization;
	double DriverSalary;
	double distance;
	const int FuelPrice = 55;
public:
	Vehicle(int capacity, double consumption, double amortization, double DriverSalary, double distance) :
		capacity{ capacity }, consumption{ consumption }, amortization{ amortization }, DriverSalary{ DriverSalary }, distance{distance} {}

	Vehicle() : Vehicle{ 0,0,0,0,0 } {}

	double PriceForTheCompany() {
		double OneKilometr = consumption / 100.0;
		double FuelPriceForTrip = (OneKilometr * distance) * FuelPrice;
		
		double result = FuelPriceForTrip + (amortization / 340.0) + DriverSalary;
		return result;
	}

	double PriceForHuman() {
		double result = (PriceForTheCompany() / capacity) * 1.4;
		return result;
	}
};

