#pragma once
class Mystring
{

private:
	char* str;

public:

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

