#include <iostream>
int BoxVolume(int length, int width = 1, int height = 1);

int main()
{
	std::cout << "[3,3,3] :" << BoxVolume(3, 3, 3) << std::endl;
}
