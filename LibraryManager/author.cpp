#include "author.h"
#include <iostream>


// constructors
author::author() : author("INVALID", "INVALID") {}

author::author(std::string first, std::string last) {
	set_first(first);
	set_last(last);
}


// methods
void author::print() const {
	std::cout << last << ", " << first;
}


// getters and setters
std::string author::get_first() const { return first; }
std::string author::get_last() const { return last; }

void author::set_first(std::string value) {
	if (value == "") {
		throw "First name cannot be empty";
	}
	first = value;
}

void author::set_last(std::string value) {
	if (value == "") {
		throw "Last name cannot be empty";
	}
	last = value;
}

