#include "Mystring.h"
#include <cstring>
#include <iostream>

// No-args constructor
Mystring::Mystring() : str{ nullptr } {

	str = new char[1];
	*str = '\0';

};

// Overloaded constructor
Mystring::Mystring(const char* s) : str{ nullptr } {

	if (s == nullptr) {

		str = new char[1];
		*str = '\0';

	}
	else {

		str = new char[std::strlen(s) + 1];
		strcpy_s(this->str, std::strlen(s) + 1, s);

	}

};

// Copy constructor
Mystring::Mystring(const Mystring& source) : str(nullptr) {

	str = new char[std::strlen(source.str) + 1];
	strcpy_s(this->str, std::strlen(source.str) + 1, source.str);

};		

// Destructor
Mystring::~Mystring() {

	delete[] str;

};

// Copy assignment
Mystring& Mystring::operator=(const Mystring& rhs) {

	std::cout << "Copy assignment" << std::endl;

	if (this == &rhs) {

		return *this;

	}

	delete[] this->str;
	str = new char[std::strlen(rhs.str) + 1];

	strcpy_s(this->str, std::strlen(rhs.str) + 1, rhs.str);

	return *this;


};		

// Methods
void Mystring::display() const {

	std::cout << str << ":" << get_length() << std::endl;

};

int Mystring::get_length() const {

	return std::strlen(str);

};

const char* Mystring::get_str() const {

	return str;

};
