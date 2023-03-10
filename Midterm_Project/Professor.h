#ifndef PROFESSOR_H
#define PROFESSOR_H
#include "Employee.h"
#include <string>
using namespace std;

class Professor:public Employee{
	protected:
		string status;
	public:
		void setstatus(string);
		string getstatus();
		Professor();
};
#endif 
