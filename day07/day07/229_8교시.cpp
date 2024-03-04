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
		"나의 이름은 수진이고 나이는 25살이며 전화번호는 112입니다.";
	}
};

int main(void)
{
	cout << "아무튼 뭘 넣어봐" << endl;

	return 0;
}


// MyInfo 객체를 생성한다.
// MyInfo개체.printMyInfo();를 호출한다.