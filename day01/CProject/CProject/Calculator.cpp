// Calculator

#include <iostream>

using namespace std;

int main() {

    int sum = 0;
    int min = 0;
    int mul = 0;
    int div = 0;

    int n1;
    cout << "ù��° ���� �Է� > ";
    cin >> n1;

    cout << "n1 : " << n1 << endl;

    char x;
    cout << "������ �Է�(+, -, *, /) > ";
    cin >> x;

    int n2;
    cout << "�ι�° ���� �Է� > ";
    cin >> n2;

    cout << "n2 : " << n2 << endl;

    if (x == '+') {
        sum = n1 + n2;
        cout << "���: " << sum << endl;
    }

    if (x == '-') {
        min = n1 - n2;
        cout << "���: " << min << endl;
    }

    if (x == '*') {
        mul = n1 * n2;
        cout << "���: " << mul << endl;
    }

    if (x == '/' && n2 == 0) {
        cout << "�и�� 0�� �� �� �����ϴ�. �޷�" << endl;

    }

    if (x == '/') {
        div = n1 / n2;
        cout << "���: " << div << endl;

    }

    return 0;
}