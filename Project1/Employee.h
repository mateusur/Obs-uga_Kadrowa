//Employee.h
#include <iostream>

namespace Records
{
	const int kDefaultStartingSalary = 30000;
	class Employee
	{
	public:
		Employee();
		void promote (int inRaiseAmount=1000);
		void demote(int inDemeritAmount = 1000);
		void hire();
	};
}
