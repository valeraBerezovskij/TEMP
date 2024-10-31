#include<iostream>
using namespace std;

class Point
{
	int x;
	int y;
public:
	Point()  // construct by default
	{
		cout << "Construct\n";
		x = y = 0;
	}
	Point(int x1, int y1)   // Construct by 2 param
	{
		cout << "Construct by 2 param\n";
		x = x1;
		y = y1;
	}
	void Init()
	{
		x = rand() % 10;
		y = rand() % 10;
	}
	void Init(int x1, int y1)
	{
		x = x1;
		y = y1;
	}
	void Output()
	{
		cout << "X: " << x << "\tY: " << y << endl;
	}

	int GetX()
	{
		return x;
	}
	int GetY()
	{
		return y;
	}
	void SetX(int a)
	{
		x = a;
	}
	void SetY(int a)
	{
		y = a;
	}
};

Point operator+(int a, Point b) {
	Point rez;
	rez.SetX(b.GetX() + a);
	rez.SetY(b.GetY() + a);
	return rez;
}

Point operator+(Point b, int a) {
	Point rez;
	rez.SetX(b.GetX() + a);
	rez.SetY(b.GetY() + a);
	return rez;
}

int operator+(Point a, Point b) {
	return a.GetX() + b.GetX() * a.GetY() + b.GetY();
}

Point operator-(int a, Point b) {
	Point rez;
	rez.SetX(b.GetX() - a);
	rez.SetY(b.GetY() - a);
	return rez;
}

Point operator-(Point b, int a) {
	Point rez;
	rez.SetX(b.GetX() - a);
	rez.SetY(b.GetY() - a);
	return rez;
}

Point operator*(int a, Point b) {
	Point rez;
	rez.SetX(b.GetX() * a);
	rez.SetY(b.GetY() * a);
	return rez;
}

Point operator*(Point b, int a) {
	Point rez;
	rez.SetX(b.GetX() * a);
	rez.SetY(b.GetY() * a);
	return rez;
}

Point operator/(int a, Point b) {
	Point rez;
	rez.SetX(b.GetX() / a);
	rez.SetY(b.GetY() / a);
	return rez;
}

Point operator/(Point b, int a) {
	Point rez;
	rez.SetX(b.GetX() / a);
	rez.SetY(b.GetY() / a);
	return rez;
}



Point operator++(Point& a) {
	a.SetX(a.GetX() + 10);
	a.SetY(a.GetY() + 10);
	return a;

}
Point operator++(Point& a, int) {
	Point temp = a;
	a.SetX(a.GetX() + 10);
	a.SetY(a.GetY() + 10);
	return temp;
}


Point operator--(Point& a) {
	a.SetX(a.GetX() - 10);
	a.SetY(a.GetY() - 10);
	return a;

}
Point operator--(Point& a, int) {
	Point temp = a;
	a.SetX(a.GetX() - 10);
	a.SetY(a.GetY() - 10);
	return temp;
}

Point& operator+=(Point& a, Point& b) {
	a.SetX(a.GetX() + b.GetX());
	a.SetY(a.GetY() + b.GetY());
	return a;
}

Point& operator+=(Point& a, int b) {
	a.SetX(a.GetX() + b);
	a.SetY(a.GetY() + b);
	return a;
}


Point& operator-=(Point& a, Point& b) {
	a.SetX(a.GetX() + b.GetX());
	a.SetY(a.GetY() + b.GetY());
	return a;
}

Point& operator-=(Point& a, int b) {
	a.SetX(a.GetX() - b);
	a.SetY(a.GetY() - b);
	return a;
}

Point& operator*=(Point& a, Point& b) {
	a.SetX(a.GetX() * b.GetX());
	a.SetY(a.GetY() * b.GetY());
	return a;
}

Point& operator*=(Point& a, int b) {
	a.SetX(a.GetX() * b);
	a.SetY(a.GetY() * b);
	return a;
}

Point& operator/=(Point& a, Point& b) {
	a.SetX(a.GetX() / b.GetX());
	a.SetY(a.GetY() / b.GetY());
	return a;
}

Point& operator/=(Point& a, int b) {
	a.SetX(a.GetX() / b);
	a.SetY(a.GetY() / b);
	return a;
}

int main()
{
	srand(unsigned(time(0)));

	Point a(1, 2);
	Point b(3, 4);

	Point q = 100 - a;
	q = a * 10;
	q = 100 / a;

	int res = a + b;

	Point t = --a;
	Point d = a--;

	a += 10;
	a += b;

}