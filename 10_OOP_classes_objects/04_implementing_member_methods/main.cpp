#include <iostream>
#include <string>

using namespace std;

class Account {

private:
	// Attributes
	string name;
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
	void set_name(string n);
	string get_name();

	bool deposit(double amount);
	bool withdraw(double amount);

};

void Account::set_name(string n) {

	name = n;

}

string Account::get_name() {

	return name;

}

bool Account::deposit(double amount) {

	balance += amount;
	return true;

};

bool Account::withdraw(double amount) {

	if ((balance - amount) >= 0) {

		balance -= amount;
		return true;

	}
	else {

		return false;

	}

};

int main() {

	Account manoel;
	manoel.set_name("Manoel's account");
	manoel.set_balance(1000.0);

	if (manoel.deposit(200.0)) {

		cout << "Deposit completed successfully." << endl;

	}
	else {

		cout << "Deposit not allowed." << endl;

	}

	if (manoel.withdraw(500.0)) {

		cout << "Withdraw completed successfully." << endl;

	}
	else {

		cout << "Withdraw not allowed. You don't have sufficient funds." << endl;

	}

	if (manoel.withdraw(1500.0)) {

		cout << "Withdraw completed successfully." << endl;

	}
	else {

		cout << "Withdraw not allowed. You don't have sufficient funds." << endl;

	}


	return 0;

}