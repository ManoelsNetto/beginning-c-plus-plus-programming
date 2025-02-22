#include <iostream>
#include "Money.h"


int main() {

	Money a{ 7, 82 };
	Money b{ 2, 50 };

	Money c{ a + b };

	std::cout << c.get_dollars() << std::endl;


}