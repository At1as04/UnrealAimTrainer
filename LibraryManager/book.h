#pragma once

#include <string>
#include "author.h"


class book {
private:
	// fields
	std::string title;
	author person;
	std::string genre;
	int page_length;
	bool checked_out = false;


public:
	// constructors
	book(const std::string& title, const author& person, const std::string& genre, int page_length);


	// methods
	void print() const;


	// getters and setters
	std::string get_title() const;
	author get_author() const;
	std::string get_genre() const;
	int get_page_length() const;
	bool is_checked_out() const;

	void set_title(const std::string&);
	void set_author(const author&);
	void set_genre(const std::string&);
	void set_page_length(int);
	void set_checked_out(bool);
};