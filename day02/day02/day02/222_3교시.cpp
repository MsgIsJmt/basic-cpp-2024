#include <iostream>
using namespace std;

int global = 100;	// ��������-���α׷���ü���� ��밡��
int global1 = 200;

int main()
{
	int val = 100;	// ��������-����� ���������� ��밡��
	global = 200;

	int global1 = 300;

	cout << "��������: " << global << endl;
	cout << "��������: " <<val<< endl;
	cout << "��������: " << global1 << endl;	// ���������� �̸��� ������ ���, ���������� ��������.

	return 0;
}
void func()
{
	int val = 0;
	global = 10;
	global1 = 10;
	val = 10;
}