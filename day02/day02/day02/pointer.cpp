#include <iostream>
using namespace std;

int main()
{
	const int num = 10;			// num������ ���ȭ��Ų��.
	//num = 100;				// num�� ����̹Ƿ� ������ �� ����.

	int num1 = 10;
	int *pnum1;					//������(�ּ�)���� pnum1 ����
	pnum1 = &num1;				//���� num1�� �ּҰ��� �����ͺ��� pnum1�� �����Ѵ�.

	cout << "num�� ����� ��" << num << endl;
	cout << "num1�� ����� ��" << num1 << endl;
	cout << "num1�� �ּҰ�" << %num1 << endl;
	cout << "pnum1�� ����� ��" << pnum1 << endl;
	cout << "pnum1�� ����� ģ���� ������" << *pnum1 << endl;

	return 0;
}