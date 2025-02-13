// Overloading copy assignment
#include <iostream>
#include <vector>
#include "Mystring.h"

using namespace std;

int main() {

	Mystring a{ "Hello" };	// overloaded constructor
	Mystring b;				// No-args constructor
	a = a;
	b = a;					// b.operator=(a)
	b = "This is a test";	// b.operator=("This is a test")

	return 0;
}
