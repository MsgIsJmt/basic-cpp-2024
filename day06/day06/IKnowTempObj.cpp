#include <iostream>
using namespace std;

class Temporary
{
private:
	int num;
public:
	Temporary(int n) : num(n)
	{
		cout << "create obj: " << num << endl;
	}
	~Temporary()
	{
		cout << "destroy doj: " << num << endl;
	}
	void ShowTempInfo()
	{
		cout << "My num is" << num << endl;
	}
};

int main(void)
{
	Temporary(100);									// Temporary t(100);
	cout << "********after make!"<< endl << endl;

	Temporary(200).ShowTempInfo();
	cout << "********after make!" << endl << endl;

	Temporary(300).ShowTempInfo();
	cout << "********end of main!" << endl << endl;
	return 0;
}