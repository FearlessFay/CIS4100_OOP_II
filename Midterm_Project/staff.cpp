#include "staff.h"
#include <iostream>
#include <string>
#include<bits/stdc++.h>

void Staff::setstatus(string a){
			status = a;
		}
string Staff::getstatus(){
			return status;
		}
	
Staff::Staff(){
		    name = "NA";
			salary = 0.0;
			status = "non-Manager";	
		}
