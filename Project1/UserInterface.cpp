//UserInterFace.cpp
#include <iostream>
#include <stdexcept>
#include <string>

#include  "Database.h"

using namespace std;
using namespace Records;

int displayMenu();
void doHire(Database& inDB);
void doFire(Database& inDB);
void doPromote(Database& inDB);
void doDemote(Database& inDB);

int main()
{
	Database employeeDB;
	bool done = false;

	while (!done)
	{
		int selection = displayMenu();
		switch (selection)
		{
		case 1:
			doHire(employeeDB);
			break;
		case 2:
			doFire(employeeDB);
			break;
		case 3:
			doPromote(employeeDB);
			break;
		case 4:
			employeeDB.displayAll();
			break;
		case 5:
			employeeDB.displayCurrent();
			break;
		case 6:
			employeeDB.displayFormer();
			break;
		case 0:
			done = true;
			break;
		default:
			cerr << "Nieznane polecenie." << endl;
		}
	}
}

int displayMenu()
{
	int selection;
	cout << endl;
	cout << "Baza danych o pracownikach" << endl;
	cout << "--------------------------" << endl;
	cout << "1) Zatrudnij nowa osobe" << endl;
	cout << "2) Zwolnij pracownika" << endl;
	cout << "3) Awansuj pracownika" << endl;
	cout << "4) Pokaz wszystkich pracownikow" << endl;
	cout << "5) Pokaz aktualnych pracownikow" << endl;
	cout << "6) Pokaz bylych pracownikw" << endl;
	cout << "0) Koniec" << endl;
	cin >> selection;
	return selection;
}
void doHire(Database& inDB);
{
	string firstName;
	string lastName;

	cout << "Imie? ";
	cin >> firstName;
	cout << "Nazwisko? ";
	cin >> lastName;

	try
	{
		inDB.addEmployee(firstName, lastName);
	}
	catch (std::exception ex)
	{
		cerr << "Dodanie nowego pracownika jest niemozliwe!" << endl;
	}
}
void doFire(Database& inDB);
{
	int employeeNumber;
	cout << "Numer pracownika? ";
	cin >> employeeNumber;
	//wyjatek

}
void doPromote(Database& inDB)
{
	int employeeNumber;
	int raiseAmount;
	cout << "Numer pracownika? ";
	cin >> employeeNumber;
	cout << "Jak podwyzka? ";
	cin >> raiseAmount;
	//wyjatek
}
