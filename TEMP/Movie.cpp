#include "Movie.h"

Movie::Movie() 
	: name(nullptr), director(nullptr), genre(nullptr), date(nullptr), time(0.0), year(0) { }

Movie::Movie(const char* name, const char* director, const char* genre, const char* date, double time, int year)
	: time(time), year(year)
{
	this->name = new char[strlen(name) + 1];
	strcpy_s(this->name, strlen(name) + 1, name);

	this->director = new char[strlen(director) + 1];
	strcpy_s(this->director, strlen(director) + 1, director);

	this->genre = new char[strlen(genre) + 1];
	strcpy_s(this->genre, strlen(genre) + 1, genre);

	this->date = new char[strlen(date) + 1];
	strcpy_s(this->date, strlen(date) + 1, date);
}

Movie::Movie(const Movie& other)
	: time(other.time), year(other.year)
{
	this->name = new char[strlen(other.name) + 1];
	strcpy_s(this->name, strlen(other.name) + 1, other.name);

	this->director = new char[strlen(other.director) + 1];
	strcpy_s(this->director, strlen(other.director) + 1, other.director);

	this->genre = new char[strlen(other.genre) + 1];
	strcpy_s(this->genre, strlen(other.genre) + 1, other.genre);

	this->date = new char[strlen(other.date) + 1];
	strcpy_s(this->date, strlen(other.date) + 1, other.date);
}

Movie::~Movie() {
	delete[] name;
	delete[] director;
	delete[] date;
	delete[] genre;
	std::cout << "dc\n";
}

void Movie::output() {
	if (name == nullptr) { return; }
	std::cout << "Name: " << name << '\n'
		      << "Director: " << director << '\n'
		      << "Genre: " << genre << '\n'
		      << "Date: " << date << '\n'
		      << "Year: " << year << '\n'
		      << "Time: " << time << '\n';
}
