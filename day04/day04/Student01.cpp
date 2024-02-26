#include <iostream>
#include <cstring>
using namespace std;

class StudentClass {
	int ID;
	char name[20];
	char major[20];
	int age;
public:																				// 접근가능하게 만들어주기
	StudentClass(int aID, const char *pname, const char *pmajor, int aage) {		// const를 답시다
		ID = aID;
		age = aage;
		strcpy(name, pname);		ㄴ	// 문자열 배열을 선언하고 바로 초기화하지 않는경우는 strcpy()를 통하여 초기화 한다.
		strcpy(major, pmajor);
	}
};

int main()
{
	StudentClass s1(001, "명수진", "수학, 화공", 25);								// 객체를 생성하면 생성자를 호출해야 한다.

	return 0;
}