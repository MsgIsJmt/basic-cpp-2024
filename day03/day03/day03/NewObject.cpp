#include <iostream>
#include <string.h>
using namespace std;

class Simple											// 자료형
{
public:
	Simple()											// 생성자(클래스이름과 같은 메서드)
	{
		cout << "I'm simple constructor!" << endl;
	}
};

int main(void)
{
	cout << "case 1: ";
	Simple* sp1 = new Simple;							// new 연산자를 통해 힙 영역에 변후 할당

	cout << "case 2: ";
	Simple* sp2 = (Simple*)malloc(sizeof(Simple) * 1);	// malloc 함수호출을 통해서 힙 영역에 변수를 할당

	cout << endl<<"end of main"<<endl;
	delete sp1;											// 객체를 반환한다.
	free(sp2);
	return 0;
}