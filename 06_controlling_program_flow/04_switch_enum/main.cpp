// Section 9
// Switch with enumeration
#include <iostream>

using namespace std;

int main() {

	enum Directions {

		left,
		right,
		up,
		down

	};

	Directions heading{ left };

	switch (heading) {

	case left:
		cout << "Going left" << endl;
		break;
	case right:
		cout << "Going right" << endl;
		break;
	default:
		cout << "Ok" << endl;
	}

	cout << endl;
	return 0;
}