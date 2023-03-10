#ifndef GRADUATE_H
#define GRADUATE_H
#include "Student.h"
#include <string>
using namespace std;

class Graduate: public Student{
	protected:
		string goal;
	public:
		void get_course();
		void setgoal(string);
		string getgoal();
		Graduate();
};
#endif 

