#include<iostream>
using namespace std;

class Student
{
    char* name;
    int age;
public:
    Student();
    Student(const char* n, int a);
    Student(const Student& obj); // copy constructor
    ~Student();
    void Print();

    void Input(); // ??????? ?????? ?????? ?? ????? ?????!
    // ????????? <- не могу прочитать
};
Student::Student()
{
    name = nullptr;
    age = 0;
}
Student::Student(const char* n, int a)
{
    name = new char[strlen(n) + 1];
    strcpy_s(name, strlen(n) + 1, n);
    age = a;
}

Student::Student(const Student& obj)
{
    name = new char[strlen(obj.name) + 1];
    strcpy_s(name, strlen(obj.name) + 1, obj.name);
    age = obj.age;
    cout << "Copy constructor\n";
}

Student::~Student()
{
    cout << "Destructor\n";
    delete[] name;
    age = 0;
}
void Student::Print()
{
    cout << "Name: " << name << "\tAge: " << age << endl;
}
void Student::Input()
{
    char buff[10];
    cout << "Enter name -> ";
    cin >> buff;

    if (name != nullptr)
    {
        delete[]name;
    }
    name = new char[strlen(buff) + 1];
    strcpy_s(name, strlen(buff) + 1, buff);

    cout << "Enter age -> ";
    cin >> age;
}
int main()
{
    Student a("Ivan", 16);
    a.Print();
    Student b = a;// 
    b.Input();
    b.Print();

}