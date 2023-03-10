#include "person.h"
#include <iostream>
#include <string>
#include<bits/stdc++.h>

void Person::setname(string s){
			name = s;
		}
string Person::getname(){
			return name;
		}
Person::Person(){
			name = "NA";
		}
