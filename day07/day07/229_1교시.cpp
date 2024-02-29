#include <iostream>
#include <cstring>

using namespace std;

class Person {
private:
    char* name;
    int age;

public:
    Person(const char* myname, int myage)
    {
        cout << "생성자 호출" << endl;
        int len = strlen(myname) + 1;
        name = new char[len];
        strcpy(name, myname);
        age = myage;
    }
    Person(const Person& copy)
    {
        cout << "깊은 복사 생성자 호출" << endl;
        this->name = new char[strlen(copy.name) + 1];
        strcpy(this->name, copy.name);
        this->age = copy.age;
    }

    void PersonInfo()
    {
        cout << "이름: " << name << ", 나이: " << age << endl;
    }
    ~Person() {
        delete[]name;
        cout << "소멸자 호출" << endl;

    }
};



int main(void) {

    Person p("명수진", 25);
    p.PersonInfo();

    Person copyp(p);
    copyp.PersonInfo();

    return 0;
}