#include "Mystring.h"
#include <string>

// Constructor
Mystring::Mystring() : str{ nullptr } {

	str = new char[1];
	*str = '\0';

}

// Overloaded constructor
Mystring::Mystring(const char* s) : str{ nullptr } {

	if (s == nullptr) {

		str = new char[1];
		*str = '\0';

	} else {

		str = new char[std::strlen(s) + 1];
		strcpy_s(this->str, std::strlen(s) + 1, s);

	}

}

// Destructor
Mystring::~Mystring() {

	delete[] str;

}

// Copy constructor
Mystring::Mystring(const Mystring& other) : str{ nullptr } {

	this->str = new char[std::strlen(other.str) + 1];
	strcpy_s(this->str, std::strlen(other.str) + 1, other.str);

}

// Copy constructor
Mystring Mystring::operator=(const Mystring& other) {

	if (this == &other) {
		
		return *this;

	}

	delete[] this->str;
	this->str = new char[std::strlen(other.str) + 1];
	strcpy_s(this->str, std::strlen(other.str) + 1, other.str);

	return *this;

}

// Move constructor
Mystring::Mystring(Mystring&& rhs) noexcept : str{ rhs.str } {

	rhs.str = nullptr;

}

// Move assignment
Mystring Mystring::operator=(Mystring&& rhs) noexcept {

	if (this == &rhs) {

		return *this;

	}

	delete[] this->str;
	this->str = rhs.str;
	rhs.str = nullptr;

	return *this;

}

// Comparison opeartor overload
bool Mystring::operator==(const Mystring& other) const {

	return (std::strcmp(this->str, other.str) == 0);

}

// Plus operator overload
Mystring Mystring::operator+(const Mystring& other) const {

	size_t buff_size = std::strlen(this->str) + std::strlen(other.str) + 1;
	char* buff = new char[buff_size];
	
	strcpy_s(buff, buff_size, this->str);
	strcat_s(buff, buff_size, other.str);

	Mystring temp{ buff };
	delete[] buff;

	return temp;

}

//  Minus operator overload
Mystring Mystring::operator-() const {

	size_t buff_size{ std::strlen(this->str) + 1 };
	char* buff = new char[buff_size];
	strcpy_s(buff, buff_size, this->str);

	for (int i = 0; i < std::strlen(buff); i++) {

		buff[i] = std::tolower(buff[i]);

	}

	Mystring temp{ buff };
	delete[] buff;
	return temp;

}

bool operator==(const Mystring& lhs, const Mystring& rhs) {
	
	if (std::strcmp(lhs.str, rhs.str) == 0) {
		return true;
	}
	else {
		return false;
	}

}

Mystring operator-(const Mystring& obj) {

	char* buff = new char[std::strlen(obj.str) + 1];
	strcpy_s(buff, std::strlen(obj.str) + 1, obj.str);

	for (int i = 0; i < std::strlen(buff); i++) {

		buff[i] = std::tolower(buff[i]);

	}

	Mystring temp{ buff };
	delete[] buff;
	return temp;

};

Mystring operator+(const Mystring& lhs, const Mystring& rhs) {

	size_t buff_size{ std::strlen(lhs.str) + std::strlen(rhs.str) + 1 };
	char* buff = new char[buff_size];
	strcpy_s(buff, buff_size, lhs.str);
	strcat_s(buff, buff_size, rhs.str);

	Mystring temp{ buff };
	delete[] buff;
	return temp;


};