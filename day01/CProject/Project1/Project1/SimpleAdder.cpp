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
	int a;	// �޸𸮰���(RAM)�� intũ��� ��������� �Ҵ��� �ް� val�̸����� ����Ѵ�.
	std::cout << "�����Է�: ";
	std::cin >> val;

	std::cout << "�Է��� ���ڴ�" << val << "�Դϴ�." << std::endl;
	a = 10;
	val = 100;
	gloval = 300;

	return 0;
}

/*
�������� = ���ú��� : ����Ǿ��� �����ȿ����� ����� ����(static ������ ����)
*/


/*
���
	1. �������
		if, switch
	2. �ݺ����
		for, while


	*for(�ʱ��; ���ǽ�; ������) {
		1. �ʱ���� ������ ���ǽ��� ������.
		2. ���̸� for���� ���๮�� �����ϰ�
		3. �������� �����Ѵ�.
		4. ���ǽ���������
		2.
		3.
		4.
		2.	 
	*  }

*/


int main()
{
	int val1, val2;
	int result = 0;	// ���� ����� ���ÿ� ���� ���� : ���� �ʱ�ȭ
	// int val1;
	// int val2;


	return 0;
}