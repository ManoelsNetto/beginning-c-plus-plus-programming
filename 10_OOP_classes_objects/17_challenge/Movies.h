#pragma once
#include "Movie.h"
#include <vector>
#include <string>

class Movies
{

private:

	std::vector<Movie> movies;

public:

	// Methods
	bool add_movie(std::string _title, std::string _rating, int _watched);
	bool increment_watched(std::string name);
	void display() const;
	
	// void display_all_movies();

	// Constrcutor
	Movies();

	// Destructor
	~Movies();

};
