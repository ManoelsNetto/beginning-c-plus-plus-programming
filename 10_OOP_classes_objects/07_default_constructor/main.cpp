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
	std::string get_name() {

		return name;

	}

	// A default constructor is a constructor that takes no arguments. In C++, if you do not define any constructors for a class, the compiler automatically provides a default constructor. However, if you define any constructor in your class, the compiler will no longer provide the default constructor automatically. If you still need a constructor that takes no arguments, you must explicitly define it yourself.
	
	Player() {

		name = "None";
		health = 100;
		xp = 1;

	}
};

int main() {

	Player manoel;
	manoel.set_name("Manoel");
    std::cout << manoel.get_name() << std::endl;

	return 0;

};