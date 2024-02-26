#include <iostream>
using namespace std;

class MyClass {
	int num;

public:
	MyClass();
	cout << "생성자 호출" << endl;
	}

};

int main()
{
	MyClass* m = new MyClass();

	return 0;
}