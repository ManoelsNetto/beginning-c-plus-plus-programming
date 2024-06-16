#pragma once
#include <string>

class Account {

private:
	// Attributes
	std::string name;
	double balance;

public:
	// Methods
	// Declared inline
	void set_balance(double value) {
		balance = value;
	};
	double get_balance() {
		return balance;
	};

	// Methods will be implemented outside this class declaration
	void set_name(std::string n);
	std::string get_name();

	bool deposit(double amount);
	bool withdraw(double amount);

};

