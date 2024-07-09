#include <iostream>
#include <string>

class Player {

private:
	// Attributes
	std::string name;
	int health;
	int xp;

public:

	Player(std::string _name = "None", int _health = 100, int _xp = 0);

	std::string get_name() { return name; }
	int get_health() { return health; }
	int get_xp() { return xp; }

	// Copy constructor

	Player(const Player& source);

	// Destructor

	~Player() { std::cout << "Destructor has been called." << std::endl; }

};

Player::Player(const Player& source) : Player{ source.name, source.health, source.xp } {

	std::cout << "Copy constructor - made copy of: " << source.name << std::endl;

}

Player::Player(std::string _name, int _health, int _xp) : name{ _name }, health{ _health }, xp{ _xp } {

	std::cout << "Three-args constructor" << std::endl;

};

void display_player(Player p) {

	std::cout << "Name: " << p.get_name() << std::endl;
	std::cout << "Health: " << p.get_health() << std::endl;
	std::cout << "XP: " << p.get_xp() << std::endl;
}


int main() {

	Player slayer;
	display_player(slayer);

	Player manoel{ "Manoel" };
	Player hero{ "Hero", 100 };

	Player villain{ "Villain", 100, 12 };
	Player new_obj{ villain };
	display_player(villain);
	return 0;

};