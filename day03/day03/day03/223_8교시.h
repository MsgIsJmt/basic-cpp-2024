#pragma once
#include <stdio.h>

typedef struct human {				// human ����ü(���� ����� ���� �ڷ���)
	char name[20];					// �Ӽ�; �������(name, age, job)
	int age;
	char job[20];
}Human;								// ������ human ����ü�� Human���� ����ϰڴ�.

void showHuman(Human h)
{
	printf("����  %d���� %s\n %s�Դϴ�.", h.name, h.age, h.job);
}

int main()
{
	int a = 10;
	human h1 = { "����", 2, "�Ϳ�����" };	// HumanŸ���� ������ �����ϰ� �ʱ�ȭ�� ��Ų��.
	showHuman(h1);

	return 0;
}