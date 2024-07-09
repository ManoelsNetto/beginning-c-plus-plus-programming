#include <iostream>
#include <string>

class Player {

private:

	// Attributes
	std::string name;
	int health;
	int xp;

public:
	// Methods
	void set_name(std::string _name) {
		name = _name;
	}

	// Overloaded Constructors
	Player() {

		std::cout << "No args constructor called." << std::endl;

	}

	Player(std::string _name) {

		name = _name;
		std::cout << "String arg constructor called." << std::endl;

	}

	Player(std::string _name, int _health, int _xp) {

		name = _name;
		health = _health;
		xp = _xp;
		std::cout << "Three args constructor called." << std::endl;

	};

	~Player() {

		std::cout << "Destructor called for " << name << std::endl;

	}

};

int main() {

	{
		Player slayer;
		slayer.set_name("Slayer");
	}

	{
		Player manoel;
		manoel.set_name("Manoel");
		Player hero("Hero");
		Player villain("Villain", 100, 14);
	}

	Player* enemy = new Player();
	enemy->set_name("Enemy");

	Player* level_boss = new Player("Level Boss", 100, 25);
	
	delete enemy;
	delete level_boss;

	return 0;

};