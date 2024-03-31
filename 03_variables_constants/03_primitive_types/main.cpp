#include <iostream>

using namespace std;

int main() {
	
    /************************************************
     * Character type
     ************************************************/
    char first_alphabet {'A'};
    cout << "The first letter of the alphabet is " << first_alphabet << endl;
    
    /************************************************
     * Integer types
     ************************************************/
    unsigned short int exam_score {55};
    cout << "My exam score was " << exam_score << endl;
    
    unsigned int countries_represented {65};
    cout << "There were " << countries_represented << " countries represented in my meeting." << endl;
    
    unsigned long int people_in_sergipe {2360000};
    cout << "There are about " << people_in_sergipe << " people in Sergipe." << endl;
    
    unsigned long long int people_on_earth {8'100'000'000};
    cout << "There are about " << people_on_earth << " people on Earth." << endl;
    
    /**********************************************
     * Floating point types
     **********************************************/
    float credit_card_payment {1983.10};
    cout << "My credit card payment is " << credit_card_payment << endl;
    
    double pi {3.14159};
    cout << "PI number is " << pi << endl;
    
    long double large_amount {-2.7e-120};
    cout << large_amount << " is a very big number." << endl;
    
    /*********************************************
     * Boolean type
     *********************************************/
    bool game_over {true};
    cout << "The value of GameOver is " << game_over << endl;
    
    return 0;
};