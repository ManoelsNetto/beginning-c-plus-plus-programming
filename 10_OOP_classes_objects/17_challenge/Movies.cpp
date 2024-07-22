#include "Movies.h"
#include "Movie.h"
#include <iostream>

// Methods
bool Movies::add_movie(std::string _title, std::string _rating, int _watched) {

	for (const Movie &m : movies) {

		if (m.get_title() == _title) {

			std::cout << "This movie is already in the collection." << std::endl;
			return false;
		
		}

	}
	
	Movie new_movie{ _title, _rating, _watched };
	movies.push_back(new_movie);
	std::cout << "The movie '" << _title << "' has been added to this collection." << std::endl;

	return true;
};


bool Movies::increment_watched(std::string name) {

	for (Movie &m : movies) {

		if (m.get_title() == name) {

			m.increment_watch();
			std::cout << "You have watched '" << name << "' one more time." << std::endl;
			return true;
		}

	}

	std::cout << "The movie was not found. You have to add this new movie to the collection." << std::endl;

	return false;
};

void Movies::display() const {

	if (movies.size() == 0) {

		std::cout << "No movies to display." << std::endl;

	}
	else {
		
		std::cout << "\n===========================================\n";
		for (const auto &row : movies) {

			row.display();

		}
		std::cout << "===========================================\n";

	}

};

// Constrcutor
Movies::Movies() {};

// Destructor
Movies::~Movies() {};
