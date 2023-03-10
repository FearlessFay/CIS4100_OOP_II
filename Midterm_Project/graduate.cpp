#include "graduate.h"
#include <iostream>
#include <string>
#include<bits/stdc++.h>
void Graduate::get_course(){
			cout<<"List of courses for Graduate student:\n";
			for(int i=0;i<course_count;++i)
				cout<<course_list[i]<<" ";
			cout<<"\n";
		}
void Graduate::setgoal(string a){
			goal = a;
		}
string Graduate::getgoal(){
			return goal;
		}
Graduate::Graduate(){
			name = "NA";
			gpa = 0.0;
			goal = "master";
		}
