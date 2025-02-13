#pragma once
class Mystring
{
private:

	char* str;

public:
	// No-args constructor
	Mystring();

	// Overloaded constructor
	Mystring(const char* s);

	// Copy constructor
	Mystring(const Mystring& other);

	// Copy assignment
	Mystring& operator=(const Mystring& other);

	// Move constructor
	Mystring(Mystring&& rhs) noexcept;

	// Move assignment
	Mystring& operator=(Mystring&& rhs) noexcept;

	// Comparison operator overload
	bool operator==(const Mystring& other) const;

	// Minus operator (make lower)
	Mystring operator-() const;

	// Plus operator (concatenate)
	Mystring operator+(const Mystring& other) const;

	// Methods
	void display() const;

	char* get_str() const;

};

