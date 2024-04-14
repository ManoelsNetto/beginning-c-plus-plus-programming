// Section 8
// Mixed Type Expressions
/*
    Ask the user to enter 3 integers
    Calculate the sum of the integers then
    calculate the average of the 3 integers.

    Display the 3 integers entered
    the sum of the 3 integers and
    the average of the 3 integers.
*/
#include <iostream>

using namespace std;

int main() {

    int total {}, num1 {}, num2 {}, num3 {};
    const int count { 3 };

    cout << "Enter three integers separated by spaces: ";
    cin >> num1 >> num2 >> num3;

    total = num1 + num2 + num3;

    double avg{ 0.0 };

    avg = static_cast<double>(total) / count;

    cout << "The average of the numbers is: " << avg << endl;

    cout << endl;
    return 0;

};