#include <iostream>
using namespace std;

class Point 
{
private:
	int a, b;

public:
	Point(int x = 0, int y = 0) : a(x), b(y)
	{}
	void viewPoint() const
	{
		cout << '[' << a << ", " << b << ']' << endl;
	}
	Point operator+(const Point& ref)
	{
		Point pos(a + ref.a, b + ref.b);
		return pos;
	}
};

int main(void) {
	Point a(10, 20);
	Point b(30, 40);
	Point c = a + b;
	Point d = a + 100;
	Point e = 100 + a;

	d.viewPoint();
	e.viewPoint();

	return 0;
};