#include "professor.h"
#include <iostream>
#include <string>
#include<bits/stdc++.h>

void Professor::setstatus(string a){
			status = a;
		}
string Professor::getstatus(){
			return status;
		}
Professor::Professor(){
		    name = "NA";
			salary = 0.0;
			status = "Part-time";	
		}
