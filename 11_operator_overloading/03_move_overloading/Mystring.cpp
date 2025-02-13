#include "Mystring.h"
#include <string>
#include <iostream>

// Constructor no-args
Mystring::Mystring() : str{ nullptr } {

	str = new char[1];
	*str = '\0';

};

// Overloaded constructor
Mystring::Mystring(const char* str) : str{ nullptr } {

	if (str == nullptr) {

		this->str = new char[1];
		*this->str = '\0';

	}
	else {
		
		this->str = new char[std::strlen(str) + 1];
		strcpy_s(this->str, std::strlen(str) + 1, str);
	
	};
};

// Copy constructor
Mystring::Mystring(const Mystring& other) : str{nullptr} {

	str = new char[std::strlen(other.str) + 1];
	strcpy_s(this->str, std::strlen(other.str) + 1, other.str);

};

// Deconstructor
Mystring::~Mystring() {

	delete[] str;

};

// Copy assignment
Mystring& Mystring::operator=(const Mystring& rhs) {

	if (this == &rhs) {

		return *this;

	}

	delete[] str;
	str = new char[std::strlen(rhs.str) + 1];
	strcpy_s(this->str, std::strlen(rhs.str) + 1, rhs.str);

	return *this;

};

// Move constructor
Mystring::Mystring(Mystring&& other) noexcept : str{ other.str } {

	other.str = nullptr;

}

// Move assignment
Mystring& Mystring::operator=(Mystring&& rhs) noexcept {

	if (this == &rhs) {

		return *this;

	};

	delete [] str;		// Free existing resource
	str = rhs.str;		// Transfer ownership
	rhs.str = nullptr;	// Leave 'other' empty
	return *this
};