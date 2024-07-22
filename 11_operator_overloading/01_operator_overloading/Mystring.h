#pragma once
class Mystring
{
private:

	char* str;

public:

	Mystring();							// No-args
	Mystring(const char* s);			// Overloaded constructor
	Mystring(const Mystring& source);	// Copy constructor
	~Mystring();						// Destructor

	// Methods
	void display() const;
	int get_length() const;
	const char* get_str() const;


};

