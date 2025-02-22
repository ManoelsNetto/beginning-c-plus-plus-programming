#include <iostream>
#include "Mystring.h"

int main() {

	Mystring manoel{ "Manoel" };
	Mystring sirleide{ "Sirleide" };
	Mystring tenorio;

	std::cout << "Enter the third person`s first name: ";
	std::cin >> tenorio;

	std::cout << "The three people are " << manoel << ", " << sirleide << " and " << tenorio << std::endl;

}