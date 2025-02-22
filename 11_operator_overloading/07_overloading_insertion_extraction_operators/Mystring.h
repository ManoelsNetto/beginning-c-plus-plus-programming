#pragma once
#include <iostream>

class Mystring
{

private:
	char* str;

public:

	// Insertion and Extraction opeartor overload
	friend std::ostream& operator<<(std::ostream& os, const Mystring& obj);
	friend std::istream& operator>>(std::istream& is, Mystring& obj);

	// No args constructor
	Mystring();
	
	// Overloaded constructor
	Mystring(const char* s);

	// Destructor
	~Mystring();

	// Copy constructor
	Mystring(const Mystring& obj);

	// Move constructor
	Mystring(Mystring&& lhs) noexcept;

	// Copy assignment
	Mystring operator=(const Mystring& obj);

	// Move assignment
	Mystring operator=(Mystring&& lhs) noexcept;

	// Display
	void display() const;

	// Getters
	int get_length() const;
	const char* get_str() const;


};

