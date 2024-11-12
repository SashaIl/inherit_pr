#pragma once
#include <iostream>
#include <cstring>
using namespace std;
class Student
{

	char* fullname;
	char* date_of_birth;
	char* specialty;
	int phone_num;
	int group_num;
public:
	Student(char* fullname_f, char* date_of_birth_f, char* specialty_f, int phone_num_f, int group_num_f) :
		fullname{ fullname_f ? new char[strlen(fullname_f) + 1] : new char[8] },
		date_of_birth{ date_of_birth_f ? new char[strlen(date_of_birth_f) + 1] : new char[8] },
		specialty{ specialty_f ? new char[strlen(specialty_f) + 1] : new char[8] },
		phone_num{ phone_num_f },
		group_num{ group_num_f } 
	{
	
		if (fullname_f) {strcpy_s(fullname, strlen(fullname_f) + 1, fullname_f);}
		else { strcpy_s(fullname, 8, (char*)"Unknown"); }

		if (date_of_birth_f) { strcpy_s(date_of_birth, strlen(date_of_birth_f) + 1, date_of_birth_f); }
		else { strcpy_s(date_of_birth, 8, (char*)"Unknown"); }

		if (specialty_f) { strcpy_s(specialty, strlen(specialty_f) + 1, specialty_f); }
		else { strcpy_s(specialty, 8, (char*)"Unknown"); }
	}

	Student() :Student(nullptr, nullptr, nullptr, 0, 0) {}

	~Student() {
		delete[] fullname;
		delete[] date_of_birth;
		delete[] specialty;
	}
	
	void displayStudent() const{
		cout << "full name: " << fullname << endl;
		cout << "date of birth: " << date_of_birth << endl;
		cout << "phone number: " << phone_num << endl;
		cout << "specialty: " << specialty << endl;
		cout << "group number: " << group_num << endl;
	}
};

