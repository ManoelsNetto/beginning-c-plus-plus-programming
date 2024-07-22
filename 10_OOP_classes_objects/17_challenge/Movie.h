#pragma once
#include <string>

class Movie
{

private:

	std::string title;
	std::string rating;
	int watched;

public:

	// Methods
	void set_title(std::string _title) { this->title = _title; }
	std::string get_title() const { return title; }

	void set_rating(std::string _rating) { this->rating = _rating; }
	std::string get_rating() const { return rating; }
	
	void set_watched(int _watched) { this->watched = _watched; }
	int get_watched() const { return watched; }

	void increment_watch() { ++watched; };

	void display() const;

	// Constructor
	Movie(std::string _title, std::string _rating, int _watched);

	// Copy Constructor
	Movie(const Movie& source);

	// Destructor
	~Movie();
};