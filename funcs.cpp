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

//Task B: Figures out the correct number of tabs and adds them to each line
int countChar(string line, char c) {
	int count = 0;
	for(char a : line) {
		if(a == c) {
			count++;
		}
	}
	return count;
}

string indent(string line) {
	string result, temp;
	int open = 0;
	for(char c : line) {
		temp += c;
		if(c == '\n') {
			open -= countChar(temp, '}');
			for(int i = 0; i < open; i++) {
				result += '\t';
			}
			open += countChar(temp, '{');
			result += temp;
			temp = "";
		}
	}
	return result;
}
