#include <iostream>
#include <cstring>
using namespace std;

class StudentClass {
	int ID;																			// �й��� ���ȭ
	char name[20];																	// ���ڿ� �迭�� �����ϰ� �ٷ� �ʱ�ȭ���� �ʴ� ���� strpy()�� ���Ͽ� �ʱ�ȭ �Ѵ�.
	char major[20];
	int age;
public:																			// ���ٰ����ϰ� ������ֱ�
	// ���ڿ��� �ּұ� ������ ������ ������ �־ ����Ѵ�. - ���忭�� ù��° ���� �ּҰ� ����ȴ�.
	// ����̴ϼȶ������ ��ü ������ �ʱ�ȭ�����ʴ� ������� �ʱ�ȭ�� �� ����Ѵ�. �� ��ü������ ������� �̸� �ʱ�ȭ�� �Ǵ�...
	StudentClass(int aID, const char *pname, const char *pmajor, int aage) {		// const�� ��ô�, ��� �̴ϼȶ�����
		ID = aID;
		age = aage;
		strcpy(name, pname);													// ���ڿ� �迭�� �����ϰ� �ٷ� �ʱ�ȭ���� �ʴ� ���� strpy()�� ���Ͽ� �ʱ�ȭ �Ѵ�.
		strcpy(major, pmajor);
	}
};

int main()
{
	StudentClass s1(001, "�����", "����, ȭ��", 25);								// ��ü�� �����ϸ� �����ڸ� ȣ���ؾ� �Ѵ�.

	return 0;
}