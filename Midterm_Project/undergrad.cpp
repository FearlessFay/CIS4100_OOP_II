#include "undergrad.h"
#include <iostream>
#include <string>
#include<bits/stdc++.h>

void Undergrad::get_course(){
			cout<<"List of courses for UG student:\n";
			for(int i=0;i<course_count;++i)
				cout<<course_list[i]<<" ";
			cout<<"\n";
		}
void Undergrad::setyear(int a){
			year = a;
		}
int Undergrad::getyear(){
			return year;
		}
Undergrad::Undergrad(){
			name = "NA";
			gpa = 0.0;
			year = 1;
		}
