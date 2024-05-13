#include <iostream>
#include <cctype>

using namespace std;

int main() {

	char c { '9' };

	cout << boolalpha;

	cout << "Is " << c << " a letter: " << static_cast<bool>(isalpha(c)) << endl;
	cout << "Is " << c << " a letter or digit: " << static_cast<bool>(isalnum(c)) << endl;
	cout << "Is " << c << " a digit: " << static_cast<bool>(isdigit(c)) << endl;
	cout << "Is " << c << " a lowercase letter: " << static_cast<bool>(islower(c)) << endl;
	cout << "Is " << c << " a printable character: " << static_cast<bool>(isprint(c)) << endl;
	cout << "Is " << c << " a punctuation character: " << static_cast<bool>(ispunct(c)) << endl;
	cout << "Is " << c << " a uppercase letter: " << static_cast<bool>(isupper(c)) << endl;
	cout << "Is " << c << " a whitespace: " << static_cast<bool>(isspace(c)) << endl;

	return 0;

}