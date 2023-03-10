#ifndef STUDENT_H
#define STUDENT_H
#include "Person.h"
#include <string>
using namespace std;

class Student: public Person{
	protected:
		double gpa;
		string course_list[100];
		int course_count;
	public:
		string honor_check();
	void setcourse(string);
	virtual void get_course();
	void setgpa(double);
	double getgpa();
	Student();
};
#endif 
