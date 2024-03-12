#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

// 음식 목록
std::vector<std::string> foodList = {
    "햄버거", "피자", "초밥", "분식", "칼국수", "된장찌개", "과자", "긱밥"
};

// 음식 추천 함수
std::string recommendFood() {
    // 난수 생성을 위한 시드 설정
    std::srand(std::time(0));

    // 랜덤으로 음식 선택
    int randomIndex = std::rand() % foodList.size();
    return foodList[randomIndex];
}

int main() {
    // 음식 추천 받기
    std::string recommendedFood = recommendFood();

    // 결과 출력
    std::cout << "오늘의 밥은 " << recommendedFood << "!!!" << std::endl;

    return 0;
}
