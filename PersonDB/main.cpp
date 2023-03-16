#include <fstream>
#include "Person.hpp"
#include "Data.hpp"

using namespace std;



int main()
{
	Person obj;

	int x = 0;
	do {

		cout << "Wybierz czynnosc:" << "\n";
		cout << "1. dodaj osobe" << "\n";
		cout << "2. Usun osobe" << "\n";
		cout << "3. Zmodyfikuj osobe" << "\n";
		cout << "4. Znajdz osobe" << "\n";
		cout << "5. Wyświetl osoby" << "\n";
		cout << "6. Zamknij program" << "\n";
		cin >> x;

		if (x == 1) {
			Data obj;
			obj.Dodaj();
		}
		else if (x == 2) {
			Data obj;
			obj.Usun();
		}
		else if (x == 3) {
			Data obj;
			obj.Edycja();
		}
		else if (x == 4) {
			Data obj;
			obj.Wyszukaj();
		}
		else if (x == 5) {
			Data obj;
			obj.Wyswietl();
		}
		else if (x == 6) {
			exit(0);
		}
	} while (x < 6);
	return 0;
}
