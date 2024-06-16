#include <iostream>
#include <string>

using namespace std;

class Player {

private:
	// Attributes
	string name;
	int health;
	int xp;

public:
	// Methods
	Player(string _name, int _health = 100, int _xp = 0) {

		name = _name;
		health = _health;
		xp = _xp;

	}
	void talk(string text_to_say) {

		cout << name << ": " << text_to_say << endl;

	}
	bool is_dead();


};

int main() {

	Player manoel("Manoel");
	manoel.talk("Hello!");

	return 0;
}