#include<iostream>
#include<time.h>
using namespace std;

class Point 
{
	int x;
	int y;
public:
	Point(): x(0), y(0) {}

	Point(int x1, int y1) :x(x1), y(y1) { }

	void Init() {
		x = rand() % 10;
		y = rand() % 10;
	}

	void Init(int x1, int y1) {
		x = x1; y = y1;
	}

	void Output() {
		cout << "X: " << x << "\tY: " << y << endl;
	}

	Point operator+(const Point& other) {
		return Point(x + other.x, y + other.y);
	}

	Point operator-(const Point& other) {
		return Point(x - other.x, y - other.y);
	}
	
	Point operator*(const Point& other) {
		return Point(x * other.x, y * other.y);
	}
	
	Point operator/(const Point& other) {
		return Point(x / other.x, y / other.y);
	}

	Point operator+(int a) {
		return Point(x + a, y + a);
	}

	Point operator*(int a) {
		return Point(x * a, y * a);
	}

	Point operator-(int a) {
		return Point(x - a, y - a);
	}

	Point operator/(int a) {
		return Point(x / a, y / a);
	}
};
	
int main()
{
	Point a(2, 3);
	Point b(2, 3);
	Point c = a + 10;
	c.Output();
}