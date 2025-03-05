#include <iostream>
#include <string>
#include "book.h"


int main() {
	author p1 = author("Ethan", "Snickerdoodle");

	book b1 = book("Sigma", p1, "Action", 200);
	book b2 = book("Not Sigma", p1, "Romance", 125);

	b1.print();
	b2.set_checked_out(true);
	b2.print();

	return 0;
}