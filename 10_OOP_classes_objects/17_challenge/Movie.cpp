#include "Movie.h"
#include <string>
#include <iostream>

// Methods

// Constructor
Movie::Movie(std::string _title, std::string _rating, int _watched) : title{_title}, rating{_rating}, watched{_watched} {};

// Copy Constructor
Movie::Movie(const Movie& source) : Movie{ source.title, source.rating, source.watched } {};

// Destructor
Movie::~Movie() {};

void Movie::display() const {

	
	std::cout << title << ", " << rating << ", " << watched << std::endl;

}