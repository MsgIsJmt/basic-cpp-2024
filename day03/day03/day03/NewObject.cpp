#include <iostream>
#include <string.h>
using namespace std;

class Simple											// �ڷ���
{
public:
	Simple()											// ������(Ŭ�����̸��� ���� �޼���)
	{
		cout << "I'm simple constructor!" << endl;
	}
};

int main(void)
{
	cout << "case 1: ";
	Simple* sp1 = new Simple;							// new �����ڸ� ���� �� ������ ���� �Ҵ�

	cout << "case 2: ";
	Simple* sp2 = (Simple*)malloc(sizeof(Simple) * 1);	// malloc �Լ�ȣ���� ���ؼ� �� ������ ������ �Ҵ�

	cout << endl<<"end of main"<<endl;
	delete sp1;											// ��ü�� ��ȯ�Ѵ�.
	free(sp2);
	return 0;
}