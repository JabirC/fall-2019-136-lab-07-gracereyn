/*Author: Grace Reynolds
  Course: CSCI-136
  Instructor: Mike Zamansky
  Assignment: Lab 7

  Task descriptions above respective functions */

#include <iostream>

using std::string;

//Task A: returns the input without leading tabs or spaces
string removeLeadingSpaces(string line) {
	string result;
	bool lead = true;
	for(char c : line) {
		if(c != ' ' && c!= '\t' && lead) {
			lead = false;
		}
		if(!lead) {
			result += c;
		}
		if(c == '\n') {
			lead = true;
		}
	}
	return result;
}
