/*
�ݺ����: while
*/
#include <iostream>

using namespace std;

int Adder(int num1 = 1, int num2 = 2);	// �Լ� ����

int main()
{
	cout << "Hi" << endl;
	cout << Adder() << endl;	// �Լ� ȣ��:Adder()

	return 0;
}

int Adder(int num1 = 1, int num2 = 2){	// �Լ� ����
return num1 + num2;
}

// Ŭ�����ȿ� ���� �Լ��� �޼����� �θ���. *****