#include <iostream>
#include <string>
#include "book.h"


int main() {
	book b1 = book("Sigma", "Ethan Snickerdoodle", "Action", 200);
	book b2 = book("Not Sigma", "Ethan Snickerdoodle", "Romance", 125);

	b1.print();

	b2.set_checked_out(true);
	b2.print();

	try {
		book b3 = book("Uh", "smella", "", 5);

		b3.print();
	}
	catch (std::exception e) {
		std::cout << e.what() << std::endl;
	}

	return 0;
}