#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include "Person.h"
#include <string>
using namespace std;

class Employee: public Person{
	protected:
		double salary;
	public:
		double new_salary();
		void setsalary(double);
	    double getsalary();
		Employee();
};
#endif
