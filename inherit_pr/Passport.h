#pragma once
#include <iostream>
#include <cstring>
using namespace std;
class Passport
{

	char* fullname;
	char* date_of_birth;
	char* place_of_birth;
	char* pass_number;
public:
	Passport(char* fullname_f, char* date_of_birth_f, char* place_of_birth_f, char* pass_number_f) :
		fullname{ fullname_f ? new char[strlen(fullname_f) + 1] : new char[8] },
		date_of_birth{ date_of_birth_f ? new char[strlen(date_of_birth_f) + 1] : new char[8] },
		place_of_birth{ place_of_birth_f ? new char[strlen(place_of_birth_f) + 1] : new char[8] },
		pass_number{ pass_number_f ? new char[strlen(pass_number_f) + 1] : new char[8] }
		
	{

		if (fullname_f) { strcpy_s(fullname, strlen(fullname_f) + 1, fullname_f); }
		else { strcpy_s(fullname, 8, (char*)"Unknown"); }

		if (date_of_birth_f) { strcpy_s(date_of_birth, strlen(date_of_birth_f) + 1, date_of_birth_f); }
		else { strcpy_s(date_of_birth, 8, (char*)"Unknown"); }

		if (place_of_birth_f) { strcpy_s(place_of_birth, strlen(place_of_birth_f) + 1, place_of_birth_f); }
		else { strcpy_s(place_of_birth, 8, (char*)"Unknown"); }

		if (pass_number_f) { strcpy_s(pass_number, strlen(pass_number_f) + 1, pass_number_f); }
		else { strcpy_s(pass_number, 8, (char*)"Unknown"); }
	}


	Passport(char* fullname_f, char* date_of_birth_f, char* place_of_birth_f) :Passport(nullptr, nullptr, nullptr, nullptr) {}

	Passport() :Passport(nullptr, nullptr, nullptr, 0) {}

	~Passport() {
		delete[] fullname;
		delete[] date_of_birth;
		delete[] place_of_birth;
	}

	void displayPassport() const {
		cout << "\nfull name: " << fullname << endl;
		cout << "\ndate of birth: " << date_of_birth << endl;
		cout << "\nplace of birth: " << place_of_birth << endl;
		cout << "\npassport number: " << pass_number << endl;
	}
};

