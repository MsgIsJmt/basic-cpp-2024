/*
반복제어문: while
*/
#include <iostream>

using namespace std;

int Adder(int num1 = 1, int num2 = 2);	// 함수 선언

int main()
{
	cout << "Hi" << endl;
	cout << Adder() << endl;	// 함수 호출:Adder()

	return 0;
}

int Adder(int num1 = 1, int num2 = 2){	// 함수 정의
return num1 + num2;
}

// 클래스안에 들어가는 함수를 메서드라고 부른다. *****