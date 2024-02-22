// Calculator

#include <iostream>

using namespace std;

int main() {

    int sum = 0;
    int min = 0;
    int mul = 0;
    int div = 0;

    int n1;
    cout << "첫번째 정수 입력 > ";
    cin >> n1;

    cout << "n1 : " << n1 << endl;

    char x;
    cout << "연산자 입력(+, -, *, /) > ";
    cin >> x;

    int n2;
    cout << "두번째 정수 입력 > ";
    cin >> n2;

    cout << "n2 : " << n2 << endl;

    if (x == '+') {
        sum = n1 + n2;
        cout << "결과: " << sum << endl;
    }

    if (x == '-') {
        min = n1 - n2;
        cout << "결과: " << min << endl;
    }

    if (x == '*') {
        mul = n1 * n2;
        cout << "결과: " << mul << endl;
    }

    if (x == '/' && n2 == 0) {
        cout << "분모는 0이 될 수 없습니다. 메롱" << endl;

    }

    if (x == '/') {
        div = n1 / n2;
        cout << "결과: " << div << endl;

    }

    return 0;
}