#include <iostream>
using namespace std;

class SoSimple
{
private:
    int num;

public:
    // 생성자: 객체가 생성될 때 호출되며, num을 인자로 초기화합니다.
    SoSimple(int n) : num(n)
    {
        // 객체 생성 시 메시지 출력
        cout << "Copy obj: " << this << endl;
    }

    SoSimple(const SoSimple& copy) : num(copy.num)
    {
        cout << "New Copy Obj: " << this << endl;
    }

    // 소멸자: 객체가 소멸될 때 호출되며, 메시지를 출력합니다.
    ~SoSimple()
    {
        cout << "destroy obj: " << this << endl;
    }
};

SoSimple SimpleFuncObj(SoSimple ob)
{
    cout << "Parm ADR: " << &ob << endl;
    return ob; // SoSimple 객체를 반환
}

int main(void)
{
    SoSimple obj(7);
    SimpleFuncObj(obj);

    cout << endl;
    SoSimple tempRef = SimpleFuncObj(obj); // 반환된 객체를 저장
    cout << "Return Obj: " << &tempRef << endl;

    return 0;
}

/* 추가 설명
1. SimpleFuncObj 함수가 SoSimple 객체를 반환하도록 수정. 
    -> 이제 함수는 SoSimple 객체를 매개변수로 받고, 동일한 객체를 반환.

2. main 함수에서 SimpleFuncObj의 반환값을 적절히 활용하여 객체를 생성하고, 
    -> 이를 tempRef라는 객체에 저장하도록 변경됨.

 3. 이제 SimpleFuncObj 함수는 매개변수로 전달된 객체를 복사하여 반환하고, 
    -> main 함수에서 이를 활용하여 객체를 생성
*/


/*
Copy obj: 000000CC5553F9C4                  // 객체  obj 주소
New Copy Obj: 000000CC5553FAC4              // 객체 ob 주소
Parm ADR: 000000CC5553FAC4                  // 객체 ob 주소
New Copy Obj: 000000CC5553FB04              // 임시객체 주소
destroy obj: 000000CC5553FAC4               // 객체 ob 소멸
destroy obj: 000000CC5553FB04               // 임시객체 소멸

New Copy Obj: 000000CC5553FB24              // 객체 ob 주소
Parm ADR: 000000CC5553FB24                  // 객체 ob 주소
New Copy Obj: 000000CC5553F9E4              // 임시객체 주소
destroy obj: 000000CC5553FB24               // 객체 ob 소멸
Return Obj: 000000CC5553F9E4                // 임시객체 주소
destroy obj: 000000CC5553F9E4               // 임시객체 소멸
destroy obj: 000000CC5553F9C4               // 객체 obj 소멸
*/