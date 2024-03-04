#include <iostream>
#include <string>

using namespace std;

// TV Ŭ���� ����
class TV {
public:
    virtual void on() = 0;
};

// �Ｚ TV Ŭ���� ����
class SamsungTV : public TV {
public:
    void on() override {
        cout << "Samsung TV is turned on." << endl;
    }
};

// LG TV Ŭ���� ����
class LGTV : public TV {
public:
    void on() override {
        cout << "LG TV is turned on." << endl;
    }
};

// ������ Ŭ���� ����
class RemoteControl {
private:
    TV* tv; // ����� TV ��ü�� ���� ������
public:
    // ������: TV ��ü�� ����
    RemoteControl(TV* tv) : tv(tv) {}

    // TV�� �Ѵ� �Լ�
    void on() {
        if (tv != nullptr) {
            tv->on();
        }
        else {
            cout << "TV is not connected." << endl;

        }
    }
};

int main() {
    // �Ｚ TV ��ü ����
    SamsungTV samsungTV;
    // ������ ��ü ���� �� �Ｚ TV�� ����
    RemoteControl remote(&samsungTV);
    // ���������� TV�� ��
    remote.on(); // �Ｚ TV ���� ���

    return 0;
}