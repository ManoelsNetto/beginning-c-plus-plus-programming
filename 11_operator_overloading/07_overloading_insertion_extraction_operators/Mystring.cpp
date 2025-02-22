#include "Mystring.h"
#include <string>
#include <iostream>

// No args constructor
Mystring::Mystring() : str{ nullptr } {

	str = new char[1];
	*str = '\0';

}

// Overloaded constructor
Mystring::Mystring(const char* s) : str{ nullptr } {

	if (s == str) {

		str = new char[1];
		*str = '\0';

	}
	else {

		str = new char[std::strlen(s) + 1];
		strcpy_s(str, std::strlen(s) + 1, s);

	}

}

// Destructor
Mystring::~Mystring() {

	delete[] str;

}

// Copy constructor
Mystring::Mystring(const Mystring& obj) : str{ nullptr } {

	str = new char[std::strlen(obj.str) + 1];
	strcpy_s(str, std::strlen(obj.str) + 1, obj.str);

}

// Move constructor
Mystring::Mystring(Mystring&& lhs) noexcept : str{ lhs.str } {

	lhs.str = nullptr;

}

// Copy assignment
Mystring Mystring::operator=(const Mystring& obj) {

	if (this == &obj) {

		return *this;

	}

	delete[] this->str;
	str = new char[std::strlen(obj.str) + 1];
	strcpy_s(str, std::strlen(obj.str) + 1, obj.str);

	return *this;

}

// Move assignment
Mystring Mystring::operator=(Mystring&& lhs) noexcept {

	if (this == &lhs) {

		return *this;

	}

	delete[] str;
	str = lhs.str;
	lhs.str = nullptr;

	return *this;

}

// Display
void display() const {

	std::cout << get_str() << std::endl;

};

// Getters
const char* Mystring::get_str() const {

	return this->str;

}