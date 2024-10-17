#pragma once
#include<string>
#include<iostream>

class Movie 
{
	char* director;
	char* genre;
	char* date;
	char * name;		
	double time;
	int    year;

public:
	Movie();
	Movie(const char* name, const char* director, const char* genre, const char* date, double time, int year);
	Movie(const Movie& other);
	~Movie();

	void output();
};

