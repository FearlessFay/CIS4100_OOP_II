#include "employee.h"
#include <iostream>
#include <string>
#include<bits/stdc++.h>

double Employee::new_salary(){
			return (1.03*salary);
		}
void Employee::setsalary(double a){
			salary = a;
		}
double Employee::getsalary(){
	    	return salary;
		}
Employee::Employee(){
			name = "NA";
			salary = 0.0;
		}
