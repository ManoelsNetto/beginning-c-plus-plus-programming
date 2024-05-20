#include <iostream>
#include <iomanip>
using namespace std;

int function_activation_count{ 0 };
double a_penny_doubled_everyday(int n, double amount = 0.01);

int main() {

    int days{ 18 };

    double total_amount = a_penny_doubled_everyday(days);

    cout << "If I start with a penny and doubled it every day for " << days << " days, I will have $" << setprecision(10) << total_amount;

    return 0;

};

double a_penny_doubled_everyday(int n, double amount) {
    function_activation_count++;

    double total_amount{};

    if (function_activation_count == 1) {
        total_amount = 0.01;
    }
    else {
        total_amount = amount * 2;
    };

    if (n == 1) {

        return total_amount;

    }

    return a_penny_doubled_everyday(n - 1, total_amount);
};