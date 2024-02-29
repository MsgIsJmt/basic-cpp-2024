#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Person {
private:
	char name[50];
	int age;
public:
	Person(const char* myname, int myage) {
		cout << "부모 생성자 실행" << endl;
		age = myage;
		strcpy(name, myname);
	}
	void WhatYourName() const {
		cout << "My name is" << name << endl;
	}
	void HowOldAreYou() const {
		cout << "I'm" << age << "yours old" << endl;
	}
};

class UnivStudent : public Person{
	string major;
public:
	UnivStudent(const char* myname, int myage, string major) : Person(myname, myage) {
		cout << "자식 생성자 실행" << endl;
		this->major = major;
	}
	void WhoAreYou() const {
		WhatYourName();
		WhatYourName();
	}
 };

int main()
{
	UnivStudent s("홍길동", 50, "백수");
	s.WhoAreYou();

	return 0;
}