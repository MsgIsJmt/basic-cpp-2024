#include <iostream>


int gloval = 100;

void func() {
	int a = 100;
	a = 100;
	gloval = 200;
}

int main()
{
	int val;
	int a;	// 메모리공간(RAM)에 int크기로 저장공간을 할당을 받고 val이름으로 사용한다.
	std::cout << "숫자입력: ";
	std::cin >> val;

	std::cout << "입력한 숫자는" << val << "입니다." << std::endl;
	a = 10;
	val = 100;
	gloval = 300;

	return 0;
}

/*
지역변수 = 로컬변수 : 선언되어진 범위안에서만 사용이 가능(static 영역에 저장)
*/


/*
제어문
	1. 선택제어문
		if, switch
	2. 반복제어문
		for, while


	*for(초기식; 조건식; 증감식) {
		1. 초기식을 가지고 조건식을 따진다.
		2. 참이면 for문의 실행문을 실행하고
		3. 증감식을 실행한다.
		4. 조건식을따지고
		2.
		3.
		4.
		2.	 
	*  }

*/


int main()
{
	int val1, val2;
	int result = 0;	// 변수 선언과 동시에 값을 대입 : 변수 초기화
	// int val1;
	// int val2;


	return 0;
}