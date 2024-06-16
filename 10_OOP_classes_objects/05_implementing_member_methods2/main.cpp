#include <iostream>
#include "Account.h"

using namespace std;

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

