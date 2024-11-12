#pragma once
#include "Passport.h"
class ForeignPassport : public Passport
{

	char* numberForeignPass;
	char* expire;
	char* visas;

public:
	ForeignPassport(
		char* numberForeignPass_f, 
		char* expire_f, 
		char* fullname_f, 
		char* date_of_birth_f, 
		char* place_of_birth_f,
		char* visas_f,
		char* pass_number_f
		) :

		numberForeignPass{ numberForeignPass_f ? new char[strlen(numberForeignPass_f) + 1] : new char[8] },
		expire{ expire_f ? new char[strlen(expire_f) + 1] : new char[8] },
		visas{ visas_f ? new char[strlen(visas_f) + 1] : new char[8] },
		Passport{ fullname_f, date_of_birth_f,place_of_birth_f, nullptr } 
	{
	
		if (numberForeignPass_f) { strcpy_s(numberForeignPass, strlen(numberForeignPass_f) + 1, numberForeignPass_f); }
		else { strcpy_s(numberForeignPass, 8, (char*)"Unknown"); }

		if (expire_f) { strcpy_s(expire, strlen(expire_f) + 1, expire_f); }
		else { strcpy_s(expire, 8, (char*)"Unknown"); }

		if (visas_f) { strcpy_s(visas, strlen(visas_f) + 1, visas_f); }
		else { strcpy_s(visas, 8, (char*)"Unknown"); }
	
	}

	ForeignPassport(char* numberForeignPass_f, char* expire_f, char* fullname_f, char* date_of_birth_f, char* place_of_birth_f,char* visas_f) :
		ForeignPassport{ numberForeignPass_f,expire_f,fullname_f,date_of_birth_f,place_of_birth_f,visas_f,nullptr } {}

	~ForeignPassport() {
		delete[] numberForeignPass;
		delete[] expire;
		delete[] visas;
	}

	void displayForeignPass() const {
		displayPassport();
		cout << "\nvisas: " << visas << endl;
		cout << "\nnumber of foreign passport: " << numberForeignPass << endl;
		cout << "\ndate of expire: " << expire << endl;
	}

};

