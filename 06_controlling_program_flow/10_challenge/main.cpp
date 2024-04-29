// Section 9
// Challenge
/*
    This challenge is about using a collection (list) of integers and allowing the user
    to select options from a menu to perform operations on the list.

    Your program should display a menu options to the user as follows:

    P - Print numbers
    A - Add a number
    M - Display mean of the numbers
    S - Display the smallest number
    L - Display the largest number
    Q - Quit

    Enter your choice:

The program should only accept valid choices from the user, both upper and lowercase selections should be allowed.
If an illegal choice is made, you should display, "Unknown selection, please try again" and the menu options should be
displayed again.


If the user enters 'P' or 'p', you should display all of the elements (ints) in the list.
If the list is empty you should display "[] - the list is empty"
If the list is not empty then all the list element should be displayed inside square brackets separated by a space.
For example, [ 1 2 3 4 5 ]

If the user enters 'A' or 'a' then you should prompt the user for an integer to add to the list
which you will add to the list and then display it was added. For example, if the user enters 5
You should display, "5 added".
Duplicate list entries are OK

If the user enters 'M' or 'm'  you should calculate the mean or average of the elements in the list and display it.
If the list is empty you should display, "Unable to calculate the mean - no data"

If the user enters 'S' or 's' you should display the smallest element in the list.
For example, if the list contains [2 4 5 1],  you should display, "The smallest number is 1"
If the list is empty you should display, "Unable to determine the smallest number - list is empty"

If the user enters 'L' or 'l' you should display the largest element in the list
For example, if the list contains [2 4 5 1], you should display, "The largest number is 5"
If the list is empty you should display, "Unable to determine the largest number - list is empty"

If the user enters 'Q' or 'q' then you should display 'Goodbye" and the program should terminate.

Before you begin. Write out the steps you need to take and decide in what order they should be done.
Think about what loops you should use as well as what you will use for your selection logic.

This exercise can be challenging! It may likely take a few attempts before you complete it -- that's OK!

Finally, be sure to test your program as you go and at the end.

Hint: Use a vector!

Additional functionality if you wish to extend this program.

- search for a number in the list and if found display the number of times it occurs in the list
- clearing out the list (make it empty again) (Hint: the vector class has a .clear() method)
- don't allow duplicate entries
- come up with your own ideas!

Good luck!

*/
#include <iostream>
#include <vector>
using namespace std;

int main() {

    char selection{};
    vector<int> list{};

    do {

        cout << "\nP - Print numbers\nA - Add a number\nM - Display mean of the numbers\nS - Display the smallest number\nL - Display the largest number\nF - Search a number\nC - Clear list\nQ - Quit" << endl;
        cout << "\nEnter your choice: ";
        cin >> selection;

        if (selection == 'P' || selection == 'p') {

            if (list.size() > 0) {

                cout << "[";

                for (int elem : list) {

                    cout << " " << elem;

                }

                cout << " ]" << endl;

            }
            else {

                cout << "[] - the list is empty" << endl;

            }

        }
        else if (selection == 'A' || selection == 'a') {

            int number{};
            cout << "Integer to add to the list: ";
            cin >> number;
            cout << endl;

            list.push_back(number);
            cout << number << " added" << endl;
        
        }
        else if (selection == 'M' || selection == 'm') {

            if (list.size() > 0) {

                int sum{};

                for (int elem : list) {

                    sum += elem;

                }

                cout << "Mean: " << static_cast<double>(sum) / list.size() << endl;

            }
            else {

                cout << "Unable to calculate the mean - no data" << endl;

            }

        }
        else if (selection == 'S' || selection == 's') {

            if (list.size() > 0) {

                int smallest{};

                for (int i = { 0 }; i < list.size(); i++) {

                    if (i == 0) {

                        smallest = { list.at(i) };
                        continue;
                    }

                    if (list[i] < smallest) {

                        smallest = { list.at(i) };
                        continue;

                    }

                }

                cout << "The smallest number is " << smallest << endl;

            }
            else {

                cout << "Unable to determine the smallest number - list is empty" << endl;

            }

        }
        else if (selection == 'L' || selection == 'l') {

            if (list.size() > 0) {

                int largest{};

                for (int i = { 0 }; i < list.size(); i++) {

                    if (i == 0) {

                        largest = { list.at(i) };
                        continue;
                    }

                    if (list[i] > largest) {

                        largest = { list.at(i) };
                        continue;

                    }

                }

                cout << "The largest number is " << largest << endl;

            }
            else {

                cout << "Unable to determine the largest number - list is empty" << endl;

            }

        }
        else if (selection == 'Q' || selection == 'q') {
            
            cout << "Goodbye!" << endl;
            break;
        
        }
        else if (selection == 'F' || selection == 'f') {

            int number{}, times{};
            cout << "Integer to search in the list: ";
            cin >> number;
            cout << endl;

            for (int elem : list) {

                if (elem == number) {

                    times++;

                }

            }

            cout << "Number of times " << number << " occurs in the list: " << times << endl;
            
        }
        else if (selection == 'C' || selection == 'c') {

            cout << "The list is empty again" << endl;
            list.clear();

        }
        else {

            cout << "Unknown selection, please try again" << endl;

        }

    } while (true);

    return 0;

}