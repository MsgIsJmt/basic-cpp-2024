#include <iostream>
#include <string>

using namespace std;

// TV 클래스 정의
class TV {
public:
    virtual void on() = 0;
};

// 삼성 TV 클래스 정의
class SamsungTV : public TV {
public:
    void on() override {
        cout << "Samsung TV is turned on." << endl;
    }
};

// LG TV 클래스 정의
class LGTV : public TV {
public:
    void on() override {
        cout << "LG TV is turned on." << endl;
    }
};

// 리모컨 클래스 정의
class RemoteControl {
private:
    TV* tv; // 연결된 TV 객체에 대한 포인터
public:
    // 생성자: TV 객체를 연결
    RemoteControl(TV* tv) : tv(tv) {}

    // TV를 켜는 함수
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
    // 삼성 TV 객체 생성
    SamsungTV samsungTV;
    // 리모컨 객체 생성 및 삼성 TV와 연결
    RemoteControl remote(&samsungTV);
    // 리모컨으로 TV를 켬
    remote.on(); // 삼성 TV 켜짐 출력

    return 0;
}