#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player {

	// Attributes
	string name{ "Player" };
	int health{ 100 };
	int xp{ 0 };

	// Methods
	void talk(string);
	bool is_dead();

};

class Account {

	// Attributes
	string name{ "Account" };
	double balance{ 0.0 };

	// Methods
	bool deposit(double);
	bool withdraw(double);

};

int main() {

	Account manoel_account;

	Player manoel;
	Player luffy;

	Player players[]{ manoel, luffy };

	vector<Player> player_vec{ manoel };
	player_vec.push_back(luffy);

	Player* enemy{ nullptr };
	enemy = new Player;

	delete enemy;

	return 0;

}