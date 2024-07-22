#include <iostream>
#include <string>

class Player {

private:
	std::string name;
	int health;
	int xp;

public:
	std::string get_name() const {
		return name;
	}
	void set_name(std::string name_val) {
		name = name_val;
	}
	
	// Overloaded Constructors
	Player();
	Player(std::string name_val);
	Player(std::string name_val, int health_val, int xp_val);

};

Player::Player() : Player{ "None", 100, 0 } {};

Player::Player(std::string name_val) : Player{ name_val, 100, 0 } {};

Player::Player(std::string name_val, int health_val, int xp_val) : name{ name_val }, health{ health_val }, xp{ xp_val } {};

void display_player_name(const Player& p) {

	std::cout << p.get_name() << std::endl;

};

int main() {

	const Player villain{ "Villain", 100, 13 };
	Player hero{ "Hero", 100, 3 };

	display_player_name(hero);

	return 0;
}