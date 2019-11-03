/*Author: Grace Reynolds
  Course: CSCI-136
  Instructor: Mike Zamansky
  Assignment: Lab 7

  Task descriptions in funcs.cpp */
#include<iostream>
#include "funcs.h"

using std::string;
using std::cin;
using std::cout;

int main() {
	string wrongtabs = "int main() {\ncode stuff here\nloop here {\nstuff in loop\n}\n}\n";
	cout << "####### TESTING removeLeadingSpaces() #######" << '\n';
	cout << removeLeadingSpaces(wrongtabs) << '\n';
	cout << "####### TESTING indent() #######" << '\n';
	cout << indent(wrongtabs) << '\n';
}
