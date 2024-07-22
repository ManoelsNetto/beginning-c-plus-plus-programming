#include "Movies.h"
#include <string>
#include <iostream>

int main() {

	Movies my_movies;
	my_movies.add_movie("Ice Age", "G", 3);
	my_movies.add_movie("Ice Age", "G", 3);
	my_movies.increment_watched("Toy Story");
	my_movies.increment_watched("Ice Age");
	my_movies.add_movie("Toy Story", "G", 4);
	my_movies.add_movie("The Simpsons", "PG", 10);
	my_movies.display();


	return 0;
}