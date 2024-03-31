/*
Linda's Lawn Mowing Service
Charges $50 per lawn
Sales tax rate is 8%
Estimates are valid for 15 days

Prompt the user for the number of lawns they would like mowed and provide an estimate such as:

    Estimate for lawn mowing service:
    Number of lawns: 3
    Price per lawn: $50
    Cost: $150
    Tax: $12
    ====================================
    Total estimate: $162
    This estimate is valid for 15 days

Pseudocode:
    Prompt the user to enter the number of lawns
    Display number of lawns
    Display price per lawn

    Calculate cost:  (number of lawns * price per lawn)
    Calculate tax:   (number of lawns * price per lawn * sales tax rate)
    Calculate and display total estimate: cost + tax
    Display estimate expiration time (15 days)
*/
#include <iostream>
#include <Windows.h>

using namespace std;

int main() {
    
    SetConsoleOutputCP(CP_UTF8);
    unsigned int number_lawns {0};
    const float price_per_lawn {50.00};
    const float tax_rate {0.08};
    const int estimate_expery {15}; // days
	
    cout << "Hello, welcome to Linda's Lawn Mowing Service 🐸" << endl;
    cout << "\nHow many lawns would you like to mow: ";
    cin >> number_lawns;
    
    cout << "\nEstimate for lawn mowing service:" << endl;
    cout << "Number of lawns: " << number_lawns << endl;
    cout << "Price per lawn: $" << price_per_lawn << endl;
    cout << "Subtotal: $" << price_per_lawn * number_lawns << endl;
    cout << "Tax: $" << price_per_lawn * number_lawns * tax_rate << endl;
    cout << "=================================" << endl;
    cout << "Total: $" << (price_per_lawn * number_lawns * (1 + tax_rate)) << endl;
    cout << "This estimate is valid for " << estimate_expery << " days" << endl;
    
	return 0;

};
