/*
Class
멤버변수와 멤버함수로 구성된다.
클래스 내부에는 멤버들의 선언으로 작성된다.
멤버함수의 정의를 외부로 빼낸다. (스코프연산자 사용)
일반적으로 멤버변수는 private, 멤버함수 public의 접근제한을 사용한다.

*/

#include <iostream>

void func()
{
	// ......
}

int main()
{

	func();
	return 0;
}

const int num = 1000;

ClassName objName;				// 일반적인 변수의 선언방식
ClassName* p new ClassName;		// new 연산자는 힙영역에 메모리를 할당하고 그 주소를 리턴한다.