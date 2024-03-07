#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

class Grade {
    char* name;
    int ko;
    int eng;
    int math;

public:
    Grade(const char* name, int ko, int eng, int math)
    {
        this->name = new char[strlen(name) + 1];
        strcpy(this->name, name);
        this->ko = ko;
        this->eng = eng;
        this->math = math;

    }
    ~Grade() {
        printf("소멸자 호출\n");
        delete[] name;
    }

    int getKo() {
        return ko;
    }

    int getEng() {
        return eng;

    }

    int getMath() {
        return math;

    }

    int sum() {
        int sum = ko + eng + math;
        return sum;
    }


    double avr() {
        double avr = sum() / 3.0;
        return avr;
    }
};

int main(void)
{
    Grade* gradeAry[3];          // 객체 포인터 배열
    //   Grade gradeAry[100];           // 객체 배열

    char name[20] = {};
    int inKo = 0;
    int inEng = 0;
    int inMath = 0;
    int num = 0;

    cout << "성적처리 학생수: " << endl;
    cin >> num;

    // vector<Grade*> gradeAry(num);
    // vector<Grade> gradeAry(num);


    // 1. 하나만 입력을 받는다 -> 5회 입력
    for (int i = 0; i < num; i++) {

        cout << "이름: ";
        cin >> name;
        cout << "국어 점수: ";
        cin >> inKo;
        cout << "영어 점수: ";
        cin >> inEng;
        cout << "수학 점수: ";
        cin >> inMath;

        // cout << name << inKo << inEng << inMath << endl;
        // 2. 객체 생성 : 5개의 객체를 생성(2) 객체 배열 or 객체 포인터 배열
        gradeAry[i] = new Grade(name, inKo, inEng, inMath);
    }

    for (int i = 0; i < num; i++) {
        //cout << "총점: " << gradeAry[i]->sum() << "점, 평점: " << gradeAry[i]->avr()<<"점" << endl;
        printf("i번째 학생 총점: %d, 평점: %f\n", gradeAry[i]->sum(), gradeAry[i]->avr());
    }




    for (int i = 0; i < num; i++) {
        printf("객체 할당 소멸자 호출\n");
        delete gradeAry[i];
    }
    return 0;
}