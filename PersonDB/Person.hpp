#include <iostream>
#include <string>

using std::string;

class Person {

private:
	string _imie;
	string _nazwisko;
	int _wiek;

public:
	Person();
	Person(string imie, string nazwisko, int wiek);

	void SetName();
	string GetName();
	void SetSurname();
	string GetSurname();
	void SetAge();
	int GetAge();
};


