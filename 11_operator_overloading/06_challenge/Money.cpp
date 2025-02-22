#include "Money.h"

Money::Money(int dollars, int cents) : dollars{ dollars }, cents{ cents } {}

Money::Money(int total) : dollars{ total / 100 }, cents{ total % 100 } {}


//----DO NOT MODIFY THE CODE ABOVE THIS LINE----
//----WRITE YOUR METHOD DEFINITIONS BELOW THIS LINE----

Money operator+(const Money& lhs, const Money& rhs) {

    int centsDollars{ (lhs.get_cents() + rhs.get_cents()) / 100 };
    int cents{ (lhs.get_cents() + rhs.get_cents()) % 100 };

    Money a{ (lhs.get_dollars() + rhs.get_dollars() + centsDollars), cents };
    return a;


}

