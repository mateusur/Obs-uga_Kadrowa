#include <iostream>
#include <string>

#include "Employee.h"

using namespace std;

namespace Records
{
	Employee::Employee()
	{
		mFirstName = "";
		mLastName = "";
		mEmployeeNumber = -1;
		mSalary = kDefaultStartingSalary;
		fHired = false;
	}

	void Employee::promote(int inRaiseAmount)
	{
		setSalary(getSalary() + inRaiseAmount);
	}

	void Employee::demote(int inDemeritAmount)
	{
		setSalary(getSalary() - inDemeritAmount);
	}

	void Employee::fire()
	{
		fHired = false;
	}

	void Employee::hire()
	{
		fHired = true;
	}

	void Employee::display()
	{
		cout << "Pracownik: " << getLastName() << ", " << getFirstName() << endl;
		cout << "----------------------" << endl;
		cout << (fHired ? "Obecnie zatrudniony" : "By³y pracownik") << endl;
		cout << "Numer teczki: " << getEmployeeNumber() << endl;
		cout << "Pensja: " << getSalary() << "z³" << endl;
		cout << endl;
	}

	void Employee::setFirstName(std::string inFirstName)
	{
		mFirstName = inFirstName;
	}

	std::string Employee::getFirstName()
	{
		return mFirstName;
	}

	void Employee::setLastName(std::string inLastName)
	{
		mLastName = inLastName;
	}

	std::string Employee::getLastName()
	{
		return mLastName;
	}
	void Employee::setEmployeeNumber(int inEmployeeNumber)
	{
		mEmployeeNumber = inEmployeeNumber;
	}
	int Employee::getEmployeeNumber()
	{
		return mEmployeeNumber;

	}
	void Employee::setSalary(int inNewSalray)
	{
		mSalary = inNewSalray;
	}
	int Employee::getSalary()
	{
		return mSalary;
	}
	bool Employee::getIsHired()
	{
		return fHired;
	}



}
