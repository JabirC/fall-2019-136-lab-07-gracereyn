/*Author: Grace Reynolds
  Course: CSCI-136
  Instructor: Mike Zamansky
  Assignment: Lab 7

  Task descriptions in funcs.cpp */

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"
#include "funcs.h"

TEST_CASE("Remove Leading Spaces") {
	CHECK(removeLeadingSpaces(" Hello") == "Hello");
	CHECK(removeLeadingSpaces("	Hello") == "Hello");
	CHECK(removeLeadingSpaces("\t Hello") == "Hello");
	CHECK(removeLeadingSpaces("\t Hello \n I am Grace") == "Hello \nI am Grace");
}

TEST_CASE("Indent") {
	CHECK(indent("int main() {\ncode stuff here\nloop here {\nstuff in loop\n}\n}\n") == "int main() {\n\tcode 			      stuff here\n\tloop here {\n\t\tstuff in loop\n\t}\n}\n");
}
