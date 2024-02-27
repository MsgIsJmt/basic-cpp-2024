/*
객체 배열
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

class Human {
private:
	char name[30];
	int age;

public:
	Human(const char*pname,int aage)  {
		cout << "생성자 호출" << endl;
		strcpy(name, pname);
		age = aage;
	}
	void HumanInfo() {
		cout << "이름: " << name << endl;
		cout << "나이: " << age << endl;
	}
	~Human(){
		cout << "소멸자 호출" << endl;
		}
};
int main()
	{
	Human h[3] = { Human("명명달", 1), Human("명수진", 25), Human("이깜보", 11)};		// 객체배열

	for (int i = 0; i < 3; i++) {
		h[i].HumanInfo();
	}

	Human* h1 = new Human("무돌이", 9);											// 객체 포인터로 멤버 접근
	Human h2("이찬규", 26);													// 객체로 멤버접근

	h1->HumanInfo();										
	h2.HumanInfo();	

	delete h1;


	return 0;
	}
