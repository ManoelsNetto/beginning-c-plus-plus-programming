#include <iostream>
#include "Mystring.h"

using namespace std;

int main() {

	Mystring empty;						// No-args constructor
	Mystring manoel{ "Tiburcio" };		// Overloaded constructor
	Mystring sirleide{ manoel };		// Copy constructor

	empty.display();
	manoel.display();
	sirleide.display();

	return 0;
}