#pragma once
#include "Student.h"
class Aspirant : public Student
{

	char* dissertation;
	char* managerFullname;
public:
	Aspirant(char* dissertation_f, char* managerFullname_f, char* fullname_f, char* date_of_birth_f, char* specialty_f, int phone_num_f, int group_num_f) :
		dissertation{ dissertation_f ? new char[strlen(dissertation_f)+1] : new char[8]},
		managerFullname{ managerFullname_f ? new char[strlen(managerFullname_f) + 1] : new char[8]},
		Student{ fullname_f,date_of_birth_f,specialty_f,phone_num_f,group_num_f } 
	{
	
		if (dissertation_f) {strcpy_s(dissertation, strlen(dissertation_f) + 1, dissertation_f);}
		else {strcpy_s(dissertation, 8, (char*)"Unknown");}

		if(managerFullname_f) { strcpy_s(managerFullname, strlen(managerFullname_f) + 1, managerFullname_f); }
		else { strcpy_s(managerFullname, 8, (char*)"Unknown"); }
	}

	~Aspirant() {
		delete[] dissertation;
		delete[] managerFullname;
	}


	void displayAspirant() {
		displayStudent();
		cout << "name of dissertation: " << dissertation << endl;
		cout << "manager's name: " << managerFullname << endl;
	}

};

