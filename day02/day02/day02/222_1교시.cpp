/*
반복제어문: while
*/
#include <iostream>

using namespace std;

void func();	// 함수 선언

int main()
{
	func();
	return 0;
}

void func(){	// 사용자 함수
	cout << "func()" << endl;
}

// 클래스안에 들어가는 함수를 메서드라고 부른다. *****