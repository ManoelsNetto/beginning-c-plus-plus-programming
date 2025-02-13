#include "Mystring.h"
#include <string>
#include <iostream>

int main() {

	Mystring a;							// no-args constructor
	Mystring b {"Hello"};				// Overloaded constructor
	a = "Hola";							// It will create a object with the overloaded constructor and then it will call the Move Assignment. After this, it will destruct the temporary rhs object
	b = a;								// Copy assignment
	b = Mystring {"Olá"};				// Move assignment

}