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
	string wrongtabs;
	cin >> wrongtabs;
	cout << removeLeadingSpaces(wrongtabs) << '\n';
}
