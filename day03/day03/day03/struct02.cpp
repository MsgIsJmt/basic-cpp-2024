/*
C Ÿ���� ����ü: ����ü ����� ��� ������ ��� �Լ��� ������
*/
#include <iostream>

typedef struct human {	
	char name[20];										// �Ӽ�: �������(name, age, job)
	int age;
	char job[20];

	void showHuman()								// ���: ����Լ�
	{
		printf("name: %s age: %d job: %s\n", name, age, job);
	}

}Human;													// �����δ� human ����ü�� Human���� ����ϰڴ�.



int main()
{
	int a = 10;
	human h1 = { "����", 2, "��ǻ���ƴ�" };			// HumanŸ���� ������ �����ϰ� �ʱ�ȭ�� ��Ų��
	h1.showHuman();

	return 0;
}