#pragma once
#include <iostream>

class human {
public:
	char name[20];
	int age;
	int birth;
	char job[20];
public:
	void showHuman()								// ���: ����Լ�
	{
		printf("name: %s age: %d job: %s\n", name, age, job);
	}

}Human;													// �����δ� human ����ü�� Human���� ����ϰڴ�.



int main()
{
	/*	int a = 10;
	//	human h1 = { "����", 2, "��ǻ���ƴ�" };			// HumanŸ���� ������ �����ϰ� �ʱ�ȭ�� ��Ų��
	//	h1.showHuman();
		human h1("����", 2, "��ǻ���ƴ�");
		h1.showHuman();*/
	human h1 = { "����", 2, "��ǻ���ƴ�" };
	return 0;
}