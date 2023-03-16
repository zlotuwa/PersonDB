#include <fstream>
#include "Person.hpp"


using namespace std;

Person::Person() {
	_imie = "";
	_nazwisko = "";
	_wiek = 0;
}

Person::Person(string imie, string nazwisko, int wiek) {
	_imie = imie;
	_nazwisko = nazwisko;
	_wiek = wiek;
}


void Person::SetName() {
	cout << "Podaj imie" << "\n";
	cin >> _imie;
}

string Person::GetName()
{
	cout << _imie << ";";
	return _imie;
}

void Person::SetSurname()
{
	cout << "Podaj nazwisko" << "\n";
	cin >> _nazwisko;
}


string Person::GetSurname()
{
	cout << _nazwisko << ";";
	return _nazwisko;
}

void Person::SetAge()
{
	cout << "Podaj wiek" << "\n";
	cin >> _wiek;
}

int Person::GetAge()
{
	cout << _wiek << "\n";
	return _wiek;
}







