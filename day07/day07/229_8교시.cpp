#include <iostream>
using namespace std;




class Myclass {
private:
	char name[30];
	int age;
};

class MyInfo : public Myclass {
private:
	char pNumber[20];
public:
	void printMyinfo() {
		"���� �̸��� �����̰� ���̴� 25���̸� ��ȭ��ȣ�� 112�Դϴ�.";
	}
};

int main(void)
{
	cout << "�ƹ�ư �� �־��" << endl;

	return 0;
}


// MyInfo ��ü�� �����Ѵ�.
// MyInfo��ü.printMyInfo();�� ȣ���Ѵ�.