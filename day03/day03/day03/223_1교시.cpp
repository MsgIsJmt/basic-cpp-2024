#include <iostream>

int main()
{
	const int num = 10;			// 상수를 선언할 때는 바로 초기화를 해야만 한다.
	//int& ref = num;			// 이상하다
	const int num = 20;
	const int& ref = num;		// 이렇게는 가능
	const int& ref = 50;		// 이것도 가능



	return 0;
}


/*
A & B: 1000  0010

int a = 10;
int b = 20;
int res = a + b;

*/

/*
C에서 메모리
1. 스택 : 지역변수, 매개변수
2. heap : 사용자에게 할당된 영역
		사용하려면 malloc()(C++:new)로 할당을 받는다 - free()(C++:delete)로 반환
3. data : 함수, 전역변수, 상수, 문자리터럴


*/