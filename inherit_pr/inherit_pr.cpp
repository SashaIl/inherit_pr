#include <iostream>
#include "Aspirant.h"
#include "ForeignPassport.h"
#include "Car.h"
using namespace std;
int main()
{
	//EX 1
	/////////////////////////////////
	
	//char* dissname{ new char[7] {"engine"} };
	//char* managername{ new char[20] {"vasya pupkin"} };
	//char* specialty{ new char[11] {"mechanic"} };
	//char* fullname{ new char[21] {"kovalchuk yurii"} };
	//char* birth{ new char[11] {"12.08.1998"} };
	//Aspirant a1{ dissname,managername,nullptr,birth,specialty,1234455,0 };
	//a1.displayAspirant();
	//delete[] dissname;
	//delete[] managername;
	//delete[] specialty;
	//delete[] fullname;
	//delete[] birth;

	//////////////////////////////
	

	//EX 2
	///////////////////////////////////////////////////

	//char* passNum{ new char[11] {"AM1312"} };
	//char* expire{ new char[11] {"31.12.2031"} };
	//char* fullname{ new char[21] {"Kovalchuk Yurii"} };
	//char* birth{ new char[11] {"12.08.1998"} };
	//char* place{ new char[11] {"Zhmerynka "} };
	//ForeignPassport pass{ passNum ,expire ,fullname,birth ,place,(char*)"USA, China, Bangladesh",nullptr };
	//pass.displayForeignPass();

	////////////////////////////////////////////////////



	//EX3
	/////////////////////////////////////////////////////

	int capacity;
	double consumption;
	double amortization;
	double DriverSalary;
	double distance;
	cout << "enter the number of seats in the bus: "; cin >> capacity;
	cout << "enter the consumption: "; cin >> consumption;
	cout << "enter the amortization: "; cin >> amortization;
	cout << "enter driver's salary per day: "; cin >> DriverSalary;
	cout << "enter the distance: "; cin >> distance;

	Car bus{consumption,amortization,DriverSalary,distance };
	cout << "price for company: " << bus.PriceForTheCompany() << endl;
	cout << "price for human: " << bus.PriceForHuman() << endl;
}
