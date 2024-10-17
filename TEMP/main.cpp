#include<iostream>
#include"Movie.h"
using namespace std;

	
int main()
{
	Movie* arr[3] = { 
					  new Movie("aaa", "aaa", "aaa", "11.11.11", 1, 1),
					  new Movie("bbb", "bbb", "bbb", "22.22.22", 2, 2),
		              new Movie("ccc", "ccc", "ccc", "33.33.33", 3, 3)
					};

	for (int i = 0; i < 3; i++)
	{
		arr[i]->output();
		cout << '\n';
	}
	cout << '\n';

	for (int i = 0; i < 3; i++) {
		delete arr[i];
	}


}