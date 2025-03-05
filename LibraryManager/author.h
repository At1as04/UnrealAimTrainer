#pragma once

#include <string>


class author {
private:
	// fields
	std::string first;
	std::string last;


public:
	// constructors
	author();
	author(std::string first, std::string last);


	// methods
	void print() const;


	// getters and setters
	std::string get_first() const;
	std::string get_last() const;

	void set_first(std::string);
	void set_last(std::string);
};