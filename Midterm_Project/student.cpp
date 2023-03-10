#include "student.h"
#include <iostream>
#include <string>
#include<bits/stdc++.h>

string Student::honor_check(){
			string tmp;
			if(gpa>3.85)
			  tmp = "honor";
			else
			  tmp = "non_honor";
			return tmp;
		}
void Student::setcourse(string a){
		course_list[course_count++] = a;
	}
void Student::get_course(){
		for(int i=0;i<course_count;i++)
		  cout<<course_list[i]<<" ";
		cout<<"\n";
	}
void Student::setgpa(double a){
		gpa = a;
	}
double Student::getgpa(){
	    return gpa;
	}
Student::Student(){
		name = "NA";
		gpa = 0.0;
		course_count = 0; 
	}
