#ifndef UNDERGRAD_H
#define UNDERGRAD_H
#include "Student.h"
#include <string>
using namespace std;

class Undergrad: public Student{
	protected:
		int year;
	public:
		void get_course();
		void setyear(int);
		int getyear();
		Undergrad();
};
#endif 
