#include <iostream>
using namespace std;

int main() {

	const int a{ 3 }, b{ 5 }, c{ 7 };

	cout << boolalpha;
	
	cout << static_cast<bool>(b == 5) << endl;
	cout << static_cast<bool>(c == (a + b) - 1) << endl;
	cout << static_cast<bool>(b > 5) << endl;
	cout << static_cast<bool>(a >= 3) << endl;
	cout << static_cast<bool>(c <= (a * b) / a) << endl;
	
	return 0;

};