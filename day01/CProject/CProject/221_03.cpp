// date : 20240221 
// file : testSwitch03.cpp
// desc : 선택 제어문 : switch문


#include <iostream>

using namespace std;

int main() {

    int inkey;
    cout << "숫자 입력 > " << endl;
    cin >> inkey;

    switch (inkey) {
    case 1:
        cout << "1 입니다." << endl;
        break; // 각각의 case에 break; 를 넣어두지 않으면 조건과 관계없이 전부 다 실행이 된다.
    case 2:
        cout << "2 입니다." << endl;
        break;
    case 3:
        cout << "3 입니다." << endl;
        break;
    default: // if문의 else와 비슷한 느낌
        cout << "이것도 저것도 아닙니다." << endl;
        break;
    }

    return 0;
}