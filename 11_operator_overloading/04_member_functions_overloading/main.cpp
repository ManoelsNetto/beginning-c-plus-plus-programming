#include "Mystring.h"
#include <iostream>


int main() {

	std::cout << std::boolalpha;

	Mystring first_name;
	Mystring manoel { "Manoel" };
	first_name = "Manoel";
	Mystring sirleide { "Sirleide" };

	std::cout << (first_name == manoel) << std::endl;
	std::cout << (manoel == sirleide) << std::endl;
	std::cout << sirleide.operator==(manoel) << std::endl;

	Mystring surname{ " Tiburcio" };
	sirleide = sirleide.operator+(surname);
	manoel = manoel + " Senhor" + surname;

	sirleide.display();
	manoel.display();
	manoel = -manoel;
	manoel.display();

};