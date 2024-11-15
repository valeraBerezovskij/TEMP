#include<iostream>
using namespace std;

class Person {
protected:
	string name;
	int age;
public:
	Person() = default;
	Person(const char* n, const int a) 
		: name(n), age(a) { }

	void output() {
		cout << "Name:\t" << name << endl;
		cout << "Age:\t" << age << endl;
	}

	void input() {
		cout << "Input name: ";
		cin >> name;
		cout << "Input age: ";
		cin >> age;
	}
};

class Student : public Person {
private:
	string academy;
public:
	Student() = default;
	Student(const char* n, const int a, const char* ac) 
		: Person(n, a), academy(ac) { }

	void output() {
		Person::output();
		cout << "Academy:\t" << academy << endl;
	}

	void input() {
		Person::input();
		cout << "Input academy: ";
		cin >> academy;
	}
};

class Teacher : public Person {
	string school;
	string subject;
public:
	Teacher() = default;
	Teacher(const char* n, const int a, const char* sc, const char* subj)
		: Person(n, a), school(sc), subject(subj){ }

	void output() {
		Person::output();
		cout << "School:\t" << school << endl;
		cout << "Subject:\t" << subject << endl;
	}

	void input() {
		Person::input();
		cout << "Input school: ";
		cin >> school;
		cout << "Input subject: ";
		cin >> subject;
	}
};

class Doctor : public Person {
private:
	string hospital;
	double salary;
public:
	Doctor() = default;
	Doctor(const char* n, const int a, const char* h, double s)
		: Person(n, a), hospital(h), salary(s) { }

	void output() {
		Person::output();
		cout << "Hospital:\t" << hospital << endl;
		cout << "Salary:\t" << salary << endl;
	}

	void input() {
		Person::input();
		cout << "Input hospital: ";
		cin >> hospital;
		cout << "Input salary: ";
		cin >> salary;
	}
};

class Director : public Person {
private:
	string school;
	double salary;
public:
	Director() = default;
	Director(const char* n, const int a, const char* sc, double s)
		: Person(n, a), school(sc), salary(s) { }

	void output() {
		Person::output();
		cout << "School:\t" << school << endl;
		cout << "Salary:\t" << salary << endl;
	}

	void input() {
		Person::input();
		cout << "Input school: ";
		cin >> school;
		cout << "Input salary: ";
		cin >> salary;
	}
};

int main() {
	Person me("Valera", 16);
	Student a("Andrii", 17, "ItStep");
	Teacher b("Maksim", 42, "Itstep", "Math");
	Doctor c("Anna", 8, "№7", 9000);
	Director d("Evgenii", 39, "Itstep", 99999999);

	me.output();
	a.output();
	b.output();
	c.output();
	d.output();
}