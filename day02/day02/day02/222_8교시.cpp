#include <iostream>
using namespace std;

int& FuncOne(int n)
{
    int num = 20;
    num += n;
    return num;                        // num = 30
}

int main(void)
{

    int& ref = FuncOne(10);       // ref = 30
    ref = 10;                     // 이상하지않아 하지만 이상한데...

    return 0;
}