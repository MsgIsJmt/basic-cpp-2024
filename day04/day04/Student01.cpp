#include <iostream>
#include <cstring>
using namespace std;

class StudentClass {
	int ID;
	char name[20];
	char major[20];
	int age;
public:																				// ���ٰ����ϰ� ������ֱ�
	StudentClass(int aID, const char *pname, const char *pmajor, int aage) {		// const�� ��ô�
		ID = aID;
		age = aage;
		strcpy(name, pname);		��	// ���ڿ� �迭�� �����ϰ� �ٷ� �ʱ�ȭ���� �ʴ°��� strcpy()�� ���Ͽ� �ʱ�ȭ �Ѵ�.
		strcpy(major, pmajor);
	}
};

int main()
{
	StudentClass s1(001, "�����", "����, ȭ��", 25);								// ��ü�� �����ϸ� �����ڸ� ȣ���ؾ� �Ѵ�.

	return 0;
}