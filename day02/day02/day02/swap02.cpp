#include <iostream>
using namespace std;
/*
    swap �Լ� �����ϱ�
*/

void swap(int* aa, int* ab) {   // �ּҸ� ���� �� �ִ� ������ ������ ����
    int temp;
    temp = *aa;                 // �ּ��� �����͸� ����
    *aa = *ab;
    *ab = temp;
}

int main()
{
    int a = 10;                 // ��������
    int b = 20;

    cout << "before: " << endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    swap(&a, &b); // ������ �ּҸ� ����

    cout << "after: " << endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    return 0;
}
