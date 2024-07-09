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

Player::Player() : name{ "None" }, health{ 100 }, xp{ 0 } {};
Player::Player(std::string _name) : name{ _name }, health{ 100 }, xp{ 0 } {};
Player::Player(std::string _name, int _health, int _xp) : name{ _name }, health{ _health }, xp{ _xp } {};

int main() {

	Player slayer;
	Player manoel{ "Manoel" };
	Player villain{ "Villain", 100, 12 };

	return 0;

};