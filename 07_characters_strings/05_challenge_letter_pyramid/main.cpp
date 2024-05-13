#include <string>
#include <iostream>

using namespace std;

int main() {

    string text{};
    cout << "Enter the string: ";
    cin >> text;
    cout << endl;

    size_t length = text.length();

    for (size_t row{ 0 }; row < length; row++) {

        // Print leading spaces
        string space(length - row - 1, ' ');
        cout << space;

        // Print characters in increasing order
        for (size_t col{ 0 }; col <= row; col++) {

            cout << text[col];

        };

        // Print characters in decreasing order
        for (int col = row - 1; col >= 0; col--) {

            cout << text[col];

        };

        cout << endl;

    };

    return 0;
};