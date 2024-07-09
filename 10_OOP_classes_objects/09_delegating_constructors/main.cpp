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
	Player();
	Player(std::string _name);
	Player(std::string _name, int _health, int _xp);

};

Player::Player() : Player{ "None", 100, 0 } {

	std::cout << "No-args constructor" << std::endl;

};
Player::Player(std::string _name) : Player{ _name, 100, 0 } {

	std::cout << "One-arg constructor" << std::endl;

};
Player::Player(std::string _name, int _health, int _xp) : name{ _name }, health{ _health }, xp{ _xp } {

	std::cout << "Three-args constructor" << std::endl;

};


int main() {

	Player slayer;
	Player manoel{ "Manoel" };
	Player villain{ "Villain", 100, 12 };

	return 0;

};