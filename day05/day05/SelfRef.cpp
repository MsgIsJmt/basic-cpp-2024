#include <iostream>
using namespace std;

class SelfRef
{
private:
	int num;
public:
	SelfRef(int n) : num(n)
	{
		cout << "객체생성" << endl;
	}
	SelfRef& Adder(int n)
	{
		num += n;
		return *this;			// this가 가지고있는건 자기 자신의 주소값, *this는 자기자신
	}
	SelfRef& ShowTwoNumber()
	{
		cout << num << endl;
		return *this;
	}
};

int main(void)
{








	SelfRef obj(3);
	SelfRef& ref = obj.Adder(2);

	obj.ShowTwoNumber();
	ref.ShowTwoNumber();

	ref.Adder(1).ShowTwoNumber().Adder(2).ShowTwoNumber();		//
	return 0;
}