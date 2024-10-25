#include<iostream>
#include<Windows.h>
using namespace std;

class Student
{
	char* name;
	int age;
public:
	////  prototype 
	Student();
	Student(const char*, int); // construct by 2 param
	Student(const Student& obj)
		: age(obj.age)
	{
		name = new char[strlen(obj.name) + 1];
		strcpy_s(name, strlen(obj.name) + 1, obj.name);
	}

	Student operator=(Student& other) {
		if (this != &other) {
			if (name != nullptr) { delete[] name; }
			name = new char[strlen(other.name) + 1];
			strcpy_s(name, strlen(other.name) + 1, other.name);
			age = other.age;
		}
		return *this;
	}
	void Output();
	~Student();

};
Student::Student()
{
	name = nullptr;
	age = 0;
}
Student::Student(const char* Name, int Age)
{
	name = new char[strlen(Name) + 1];
	strcpy_s(name, strlen(Name) + 1, Name);
	age = Age;
}
void Student::Output()
{
	cout << "Name: " << name << endl
		<< "Age: " << age << endl << endl;
}
Student::~Student()
{
	if (name != nullptr)
	{
		delete[] name;
	}
}

int main()
{
	Student obj1("Oleg", 21);
	Student obj2("Og", 21);
	obj1 = obj2;
	obj1.Output();
}