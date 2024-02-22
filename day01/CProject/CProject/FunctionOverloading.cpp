// date : 20240221 
// file : test06Ovrl.cpp
// desc : overloading (다중 정의)

/*
C++에서는 두 가지 조건을 통해 함수를 구분하는데
1. 함수명
2. 입력
이다.

이를 비교한 결과 동일한 경우 두 함수는 동일한 함수로 취급된다.
*/

#include <iostream>

using namespace std;

void MyFunc(void) {
	cout << "MyFuc(void) called" << endl;
}

void MyFunc(char c) {
	cout << "MyFuc(char c) called" << endl;
}

void MyFunc(int a, int b) {
	cout << "MyFuc(int a, int b) called" << endl;
}

int main(void) {

	MyFunc();
	MyFunc('A');
	MyFunc(12, 13);
	return 0;
}