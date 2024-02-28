#include <iostream>
using namespace std;

class SoSimple
{
private:
    int num;

public:
    // ������: ��ü�� ������ �� ȣ��Ǹ�, num�� ���ڷ� �ʱ�ȭ�մϴ�.
    SoSimple(int n) : num(n)
    {
        // ��ü ���� �� �޽��� ���
        cout << "Copy obj: " << this << endl;
    }

    SoSimple(const SoSimple& copy) : num(copy.num)
    {
        cout << "New Copy Obj: " << this << endl;
    }

    // �Ҹ���: ��ü�� �Ҹ�� �� ȣ��Ǹ�, �޽����� ����մϴ�.
    ~SoSimple()
    {
        cout << "destroy obj: " << this << endl;
    }
};

SoSimple SimpleFuncObj(SoSimple ob)
{
    cout << "Parm ADR: " << &ob << endl;
    return ob; // SoSimple ��ü�� ��ȯ
}

int main(void)
{
    SoSimple obj(7);
    SimpleFuncObj(obj);

    cout << endl;
    SoSimple tempRef = SimpleFuncObj(obj); // ��ȯ�� ��ü�� ����
    cout << "Return Obj: " << &tempRef << endl;

    return 0;
}

/* �߰� ����
1. SimpleFuncObj �Լ��� SoSimple ��ü�� ��ȯ�ϵ��� ����. 
    -> ���� �Լ��� SoSimple ��ü�� �Ű������� �ް�, ������ ��ü�� ��ȯ.

2. main �Լ����� SimpleFuncObj�� ��ȯ���� ������ Ȱ���Ͽ� ��ü�� �����ϰ�, 
    -> �̸� tempRef��� ��ü�� �����ϵ��� �����.

 3. ���� SimpleFuncObj �Լ��� �Ű������� ���޵� ��ü�� �����Ͽ� ��ȯ�ϰ�, 
    -> main �Լ����� �̸� Ȱ���Ͽ� ��ü�� ����
*/


/*
Copy obj: 000000CC5553F9C4                  // ��ü  obj �ּ�
New Copy Obj: 000000CC5553FAC4              // ��ü ob �ּ�
Parm ADR: 000000CC5553FAC4                  // ��ü ob �ּ�
New Copy Obj: 000000CC5553FB04              // �ӽð�ü �ּ�
destroy obj: 000000CC5553FAC4               // ��ü ob �Ҹ�
destroy obj: 000000CC5553FB04               // �ӽð�ü �Ҹ�

New Copy Obj: 000000CC5553FB24              // ��ü ob �ּ�
Parm ADR: 000000CC5553FB24                  // ��ü ob �ּ�
New Copy Obj: 000000CC5553F9E4              // �ӽð�ü �ּ�
destroy obj: 000000CC5553FB24               // ��ü ob �Ҹ�
Return Obj: 000000CC5553F9E4                // �ӽð�ü �ּ�
destroy obj: 000000CC5553F9E4               // �ӽð�ü �Ҹ�
destroy obj: 000000CC5553F9C4               // ��ü obj �Ҹ�
*/