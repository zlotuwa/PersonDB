#include "Data.hpp"
#include "fstream"

using namespace std;

void Data::Wyswietl() {
	ifstream file("plik.txt");
	string MyLine;
	while (getline(file, MyLine)) {
		cout << MyLine << "\n";
	}
}

void Data::Usun() {
	ifstream MyFile("plik.txt");
	ofstream Plik("usun.txt");
	string linia;
	int id = 0, usun_osobe;

	cout << "ktulom linijke usuniesz" << "\n";
	cin >> usun_osobe;

	while (getline(MyFile, linia))
	{
		id++;
		if (id != usun_osobe)
		{
			Plik << linia << endl;
		}
	}

	MyFile.close();
	Plik.close();

	remove("plik.txt");
	rename("usun.txt", "plik.txt");
}

void Data::Dodaj() {
	Person obiekt;

	obiekt.SetName();
	obiekt.SetSurname();
	obiekt.SetAge();

	ofstream plik("plik.txt", ios::app);

	plik << " " << obiekt.GetName();
	plik << " " << obiekt.GetSurname();
	plik << " " << obiekt.GetAge();
	plik << "\n\r";
}

void Data::Edycja() {
	Data objekt;
	ifstream plik("plik.txt");
	ofstream plik2("zmodyfikuj.txt");
	int id = 0, zmodyfikuj;
	string line;

	cout << "Podaj linie do zmodyfikowania" << "\n";
	cin >> zmodyfikuj;

	while (getline(plik, line)) {
		id++;
		if (id != zmodyfikuj) {
			plik2 << line << endl;
		}
		else if (id = zmodyfikuj) {
			objekt.Dodaj();
		}
	}
	plik.close();
	plik2.close();

	remove("plik.txt");
	rename("zmodyfikuj.txt", "plik.txt");
}

void Data::Wyszukaj() {
	string line;
	int offset;
	string search = "";
	ifstream file("plik.txt");

	cout << "Podaj dane osoby do wyszukania: ";
	cin >> search;

	while (getline(file, line)) {
		if ((offset = line.find(search, 0)) != string::npos) {
			cout << "found: " << line << endl;
		}
		else {
			cout << "Nie ma takiego delikwenta" << endl;
		}
	}
	file.close();
}