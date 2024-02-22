/*
	반복제어문: for
*/
#include <iostream>

//int sum;
int main()
{
	int sum = 0;
	for (int i = 1; i <= 100; i++) {
		//sum += i;
		sum = sum + i;
}
	std::cout << sum << std::endl;

	return 0;
}