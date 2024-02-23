#pragma once
#include <stdio.h>

typedef struct human {				// human 구조체(만든 사용자 정의 자료형)
	char name[20];					// 속성; 멤버변수(name, age, job)
	int age;
	char job[20];
}Human;								// 앞으로 human 구조체를 Human으로 사용하겠다.

void showHuman(Human h)
{
	printf("나는  %d살인 %s\n %s입니다.", h.name, h.age, h.job);
}

int main()
{
	int a = 10;
	human h1 = { "명명달", 2, "귀염둥이" };	// Human타입의 변수를 선언하고 초기화를 시킨다.
	showHuman(h1);

	return 0;
}