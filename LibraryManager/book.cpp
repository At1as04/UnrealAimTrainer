#include "book.h"
#include <iostream>


// constructors
book::book(std::string title, std::string author, std::string genre, int page_length) {

}


// methods
void book::print() const {

}


// getters and setters
std::string book::get_title() const { return title; }

std::string book::get_author() const { return author; }

std::string book::get_genre() const { return genre; }

int book::get_page_length() const { return page_length; }

bool book::is_checked_out() const { return checked_out; }


void book::set_title(std::string value) {

}

void book::set_author(std::string value) {

}

void book::set_genre(std::string value) {

}

void book::set_page_length(int value) {

}

void book::set_checked_out(bool value) {
	checked_out = value;
}