#pragma once
class Mystring
{
	// Variables

private: 
	char* str;

public:

	// Constructor no-args
	Mystring();

	// Overloaded constructor
	Mystring(const char* str);

	// Copy constructor
	Mystring(const Mystring& other);

	// Move constructor
	Mystring(Mystring&& other) noexcept;

	// Deconstructor
	~Mystring();
	
	// Copy assignment
	Mystring& operator=(const Mystring& rhs);

	// Move assignment
	Mystring& operator=(Mystring&& rhs) noexcept;

};

