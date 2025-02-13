#include "Mystring.h"
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
		strcpy_s(str, std::strlen(s) + 1, s);

	}

};

// Copy constructor
Mystring::Mystring(const Mystring& other) : str{ nullptr } {

	str = new char[std::strlen(other.str) + 1];
	strcpy_s(str, std::strlen(other.str) + 1, other.str);

};


// Copy assignment
Mystring& Mystring::operator=(const Mystring& other) {

	if (this == &other) {

		return *this;

	};

	delete[] this->str;
	str = new char[std::strlen(other.str) + 1];
	strcpy_s(this->str, std::strlen(other.str) + 1, other.str);

	return *this;

};

// Move constructor
Mystring::Mystring(Mystring&& rhs) noexcept : str{rhs.str} {

	rhs.str = nullptr;

};

// Move assignment
Mystring& Mystring::operator=(Mystring&& rhs) noexcept {

	if (this == &rhs) {

		return *this;

	}

	delete[] str;			// Free existing resource
	str = rhs.str;			// Transfer ownership
	rhs.str = nullptr;		// Nullify the object

	return *this;
};

// Comparison operator overload
bool Mystring::operator==(const Mystring & other) const {

	return (std::strcmp(this->str, other.str) == 0); 

};

// Minus operator (make lower)
Mystring Mystring::operator-() const {

	char* buff = new char[std::strlen(this->str) + 1];
	strcpy_s(buff, std::strlen(this->str) + 1, this->str);

	for (int i = 0; i < std::strlen(buff); i++) {

		buff[i] = std::tolower(buff[i]);

	};

	Mystring temp{ buff };
	delete[] buff;
	return temp;
	

};

// Plus operator (concatenate)
Mystring Mystring::operator+(const Mystring& other) const {

	size_t buff_size{ std::strlen(this->str) + std::strlen(other.str) + 1 };
	char* buff = new char[buff_size];
	strcpy_s(buff, buff_size, this->str);
	strcat_s(buff, buff_size, other.str);
	
	Mystring temp{ buff };
	delete[] buff;
	return temp;


};

// Methods
void Mystring::display() const {

	std::cout << get_str() << std::endl;

};

char* Mystring::get_str() const {

	return this->str;

}