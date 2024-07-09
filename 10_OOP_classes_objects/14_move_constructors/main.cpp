#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Move {

private:
	int* data;

public:
	void set_data_value(int d) { *data = d; }
	int get_data_value() { return *data; }

	// Constructor
	Move(int d);

	// Copy Constructor
	Move(const Move &source);

	// Move Constructor
	Move(Move &&source);

	// Destructor
	~Move();
};

Move::Move(int d) {

	data = new int;
	*data = d;

	cout << "Constructor for: " << d << endl;

};

Move::Move(const Move& source) : Move(*source.data) {

	cout << "Copy constructor - deep copy for: " << *data << endl;

}

Move::~Move() {

	if (data != nullptr) {

		cout << "Destrcutor freeing data for: " << *data << endl;

	}
	else {

		cout << "Destructor freeing data for nullptr." << endl;

	}

	delete data;

}

Move::Move(Move &&source) : data{source.data} {

	source.data = nullptr;
	cout << "Move constructor - moving resource: " << *data << endl;

}

int main() {

	vector<Move> vec;

	vec.push_back(Move{ 10 });

	return 0;

};
