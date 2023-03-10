#ifndef STAFF_H
#define STAFF_H
#include "Employee.h"
#include <string>
using namespace std;

class Staff:public Employee{
	protected:
		string status;
	public:
		void setstatus(string);
		string getstatus();
		Staff();
};
#endif 
