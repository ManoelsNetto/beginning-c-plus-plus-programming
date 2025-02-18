#pragma once
#include <string>
#include <iostream>

class Mystring
{
	friend bool operator==(const Mystring& lhs, const Mystring& rhs);
	friend Mystring operator-(const Mystring& obj);
	friend Mystring operator+(const Mystring& lhs, const Mystring& rhs);


private:
	char* str;

public:
	
	// Constructor
	Mystring();

	// Overloaded constructor
	Mystring(const char* s);

	// Destructor
	~Mystring();

	// Copy constructor
	Mystring(const Mystring& other);

	// Copy assignment
	Mystring operator=(const Mystring& other);

	// Move constructor
	Mystring(Mystring&& rhs) noexcept;

	// Move assignment
	Mystring operator=(Mystring&& rhs) noexcept;

	// Comparison opeartor overload
	bool operator==(const Mystring& other) const;

	// Plus opeator overload
	Mystring operator+(const Mystring& other) const;

	// Minus opertor overload
	Mystring operator-() const;

	// Other methods
	char* get_str() {
	
		return this->str;

	}

	void display() {

		std::cout << this->get_str() << std::endl;

	}

};

