#pragma once

#include <string>


class book {
private:
	// fields
	std::string title;
	std::string author;
	std::string genre;
	int page_length;
	bool checked_out = false;


public:
	// constructors
	book(std::string, std::string, std::string, int);


	// methods
	void print() const;


	// getters and setters
	std::string get_title() const;
	std::string get_author() const;
	std::string get_genre() const;
	int get_page_length() const;
	bool is_checked_out() const;

	void set_title(std::string);
	void set_author(std::string);
	void set_genre(std::string);
	void set_page_length(int);
	void set_checked_out(bool);
};