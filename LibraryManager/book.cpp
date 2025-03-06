#include "book.h"
#include <iostream>


// constructors
book::book(const std::string& title, const std::string& author, const std::string& genre, int page_length) {
	set_title(title);
	set_author(author);
	set_genre(genre);
	set_page_length(page_length);
}


// methods
void book::print() const {
	std::cout << "\'" << title << "\' by " << author;
	std::cout << " (" << genre << ") | " << page_length << " pages | ";
	if (is_checked_out()) {
		std::cout << "CHECKED OUT" << std::endl;
		return;
	}
	std::cout << "In Library" << std::endl;
}


// getters and setters
std::string book::get_title() const { return title; }

std::string book::get_author() const { return author; }

std::string book::get_genre() const { return genre; }

int book::get_page_length() const { return page_length; }

bool book::is_checked_out() const { return checked_out; }


void book::set_title(const std::string& value) {
	if (value == "") {
		throw std::exception("Title cannot be empty");
	}
	title = value;
}

void book::set_author(const std::string& value) {
	if (value == "") {
		throw std::exception("Author cannot be empty");
	}
	author = value;
}

void book::set_genre(const std::string& value) {
	if (value == "") {
		throw std::exception("Genre cannot be empty");
	}
	genre = value;
}

void book::set_page_length(int value) {
	if (value <= 0) {
		throw std::exception("Invalid page length value");
	}
	page_length = value;
}

void book::set_checked_out(bool value) {
	checked_out = value;
}