#include "staff.h"
#include "professor.h"
#include "graduate.h"
#include "undergrad.h"
#include "employee.h"
#include "student.h"
#include "person.h"
#include <iostream>
#include <string>
#include<bits/stdc++.h>
using namespace std;

int main(){
	Graduate g1;
	
	g1.setgoal("phd");
	cout<<g1.getgoal()<<endl;
	g1.setgpa(3.88);
	cout<<g1.getgpa()<<endl;
	g1.setname("Fay");
	cout<<g1.getname()<<endl;
	g1.setcourse("Computer Science");
	g1.get_course();
	cout<<g1.honor_check()<<endl;

	Undergrad u1;
	
	u1.setyear(1);
	cout<<u1.getyear()<<endl;
	u1.setgpa(3.90);
	cout<<u1.getgpa()<<endl;
	u1.setname("Faye");
	cout<<u1.getname()<<endl;
	u1.setcourse("Accounting");
	u1.get_course();
	cout<<u1.honor_check()<<endl;
	
	Staff s1;
	
	s1.setname("Wang");
	s1.setsalary(1000);
	s1.setstatus("manager");
	cout<<s1.getname()<<endl;
	cout<<s1.getsalary()<<endl;
	cout<<s1.new_salary()<<endl;
	cout<<s1.getstatus()<<endl;
	
	Professor p1;
	
	p1.setname("Lei");
	p1.setsalary(1500);
	p1.setstatus("full-time");
	cout<<p1.getname()<<endl;
	cout<<p1.getsalary()<<endl;
	cout<<p1.getstatus()<<endl;
	cout<<p1.new_salary()<<endl;
	
	Person pe1;
	pe1.setname("Jie");
	cout<<pe1.getname()<<endl;
	
	Employee e1;
	e1.setname("Wen");
	e1.setsalary(2000.5);
	cout<<e1.getsalary()<<endl;
	cout<<e1.getname()<<endl;
	cout<<e1.new_salary()<<endl;
	
	Student st1;
	st1.setcourse("Math");
	st1.setgpa(3.0);
	st1.setname("Ying");
	cout<<st1.getname()<<endl;
	cout<<st1.honor_check()<<endl;
		
	return 0;
}
