//DatabaseTest.cpp
#include <iostream>
#include  "Database.h"

using namespace std;
using namespace Records;

int main()
{
	Database myDB;
	Employee& emp1 = myDB.addEmployee("Greg", "Wallis");
	emp1.fire();
	Employee& emp2 = myDB.addEmployee("Scott", "Kleper");
	emp2.setSalary(100000);
	Employee emp3 = myDB.addEmployee("Nick", "Solter");
	emp3.setSalary(10000);
	emp3.promote();

	cout << "Wszyscy pracownicy: " << endl;
	cout << endl;
	myDB.displayAll();

	cout << endl;
	cout << "Aktualni pracownicy: " << endl;
	cout << endl;
	myDB.displayCurrent();

	cout << endl;
	cout << "Byli pracownicy: " << endl;
	cout << endl;
	myDB.displayFormer();

	system("pause");
	return 0;
}
