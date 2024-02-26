#pragma once
#include <iostream>

class human {
public:
	char name[20];
	int age;
	int birth;
	char job[20];
public:
	void showHuman()								// 기능: 멤버함수
	{
		printf("name: %s age: %d job: %s\n", name, age, job);
	}

}Human;													// 앞으로는 human 구조체를 Human으로 사용하겠다.



int main()
{
	/*	int a = 10;
	//	human h1 = { "명명달", 2, "사실사람아님" };			// Human타입의 변수를 선언하고 초기화를 시킨다
	//	h1.showHuman();
		human h1("명명달", 2, "사실사람아님");
		h1.showHuman();*/
	human h1 = { "명명달", 2, "사실사람아님" };
	return 0;
}