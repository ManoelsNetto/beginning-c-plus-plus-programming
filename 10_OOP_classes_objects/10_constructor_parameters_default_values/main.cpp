#include <iostream>
#include <string>

class Player {

private:
	// Attributes
	std::string name;
	int health;
	int xp;

public:

	// Overloaded Constructors
	Player(std::string _name = "None", int _health = 100, int _xp = 0);

};

Player::Player(std::string _name, int _health, int _xp) : name{ _name }, health{ _health }, xp{ _xp } {

	std::cout << "Three-args constructor" << std::endl;

};


int main() {

	Player slayer;
	Player manoel{ "Manoel" };
	Player hero{ "Hero", 100 };
	Player villain{ "Villain", 100, 12 };

	return 0;

};