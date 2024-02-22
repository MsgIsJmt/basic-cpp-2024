#include <iostream>
using namespace std;

int main()
{
	const int num = 10;			// num변수를 상수화시킨다.
	//num = 100;				// num이 상수이므로 변경할 수 없다.

	int num1 = 10;
	int *pnum1;					//포인터(주소)변수 pnum1 선언
	pnum1 = &num1;				//변수 num1의 주소값을 포인터변수 pnum1에 저장한다.

	cout << "num에 저장된 값" << num << endl;
	cout << "num1에 저장된 값" << num1 << endl;
	cout << "num1의 주소값" << %num1 << endl;
	cout << "pnum1에 저장된 값" << pnum1 << endl;
	cout << "pnum1에 저장된 친구의 데이터" << *pnum1 << endl;

	return 0;
}