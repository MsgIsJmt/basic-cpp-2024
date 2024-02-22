#include <iostream>
using namespace std;

int main(void)
{
    int num = 12;         
    int *ptr = &num;               
    int **dptr = &ptr;                 

    int& ref = num;
    int *pref = &num;
    int **dpref = &ptr;

    cout <<ref<< endl;
    cout << *pref << endl;
    cout << **dpref << endl;

    return 0;
}
