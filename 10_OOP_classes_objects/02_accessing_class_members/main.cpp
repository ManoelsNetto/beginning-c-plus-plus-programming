#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player {

public:
	// Attributes
	string name;
	int health;
	int xp;

	// Methods
	void talk(string text_to_say) { 
		
		cout << name << " says " << text_to_say << endl; 
	
	};
	bool is_dead();

};

class Account {

public:
	// Attributes
	string name;
	double balance;

	// Methods
	void deposit(double val) {
	
		balance += val;
		cout << "In deposit" << endl;
	
	};
	void withdraw(double val) {
	
		balance -= val;
		cout << "In withdraw" << endl;

	};

};

int main() {

	Player manoel;
	manoel.name = "Manoel";
	manoel.health = 100;
	manoel.xp = 8;
	manoel.talk("Hi there!");

	Player* enemy = new Player();
	(*enemy).name = "Joaozinho";
	(*enemy).health = 85;
	enemy->xp = 15;

	enemy->talk("I will destroy you!");

	delete enemy;

	Account manoel_account;
	manoel_account.name = "Manoel's account";
	manoel_account.balance = 5000.0;

	manoel_account.deposit(1420);
	manoel_account.withdraw(1750);

	return 0;
}