#include <iostream>

int main()
{
	const int num = 10;			// ����� ������ ���� �ٷ� �ʱ�ȭ�� �ؾ߸� �Ѵ�.
	//int& ref = num;			// �̻��ϴ�
	const int num = 20;
	const int& ref = num;		// �̷��Դ� ����
	const int& ref = 50;		// �̰͵� ����



	return 0;
}


/*
A & B: 1000  0010

int a = 10;
int b = 20;
int res = a + b;

*/

/*
C���� �޸�
1. ���� : ��������, �Ű�����
2. heap : ����ڿ��� �Ҵ�� ����
		����Ϸ��� malloc()(C++:new)�� �Ҵ��� �޴´� - free()(C++:delete)�� ��ȯ
3. data : �Լ�, ��������, ���, ���ڸ��ͷ�


*/