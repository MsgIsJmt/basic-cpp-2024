/*
��ü �迭
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
		cout << "������ ȣ��" << endl;
		strcpy(name, pname);
		age = aage;
	}
	void HumanInfo() {
		cout << "�̸�: " << name << endl;
		cout << "����: " << age << endl;
	}
	~Human(){
		cout << "�Ҹ��� ȣ��" << endl;
		}
};
int main()
	{
	Human h[3] = { Human("����", 1), Human("�����", 25), Human("�̱���", 11)};		// ��ü�迭

	for (int i = 0; i < 3; i++) {
		h[i].HumanInfo();
	}

	Human* h1 = new Human("������", 9);											// ��ü �����ͷ� ��� ����
	Human h2("������", 26);													// ��ü�� �������

	h1->HumanInfo();										
	h2.HumanInfo();	

	delete h1;


	return 0;
	}
