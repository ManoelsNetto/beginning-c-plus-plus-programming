#include <iostream>
#include "Mystring.h"

int main() {

	std::cout << std::boolalpha;

	Mystring test;
	Mystring manoel{ "Manoel" };
	test = " Tiburcio";

	std::cout << manoel.operator==("Manoel") << std::endl;
	Mystring fullname{ manoel.operator+(test) };
	Mystring lower{ fullname.operator-()};
	lower.display();

	std::cout << operator==(manoel, test) << std::endl;
	Mystring a = operator-(fullname);
	// Mystring b{ operator+(Mystring("Sirleide"), "Tiburcio") };

	return 0;
}