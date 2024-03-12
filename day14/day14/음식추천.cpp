#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

// ���� ���
std::vector<std::string> foodList = {
    "�ܹ���", "����", "�ʹ�", "�н�", "Į����", "�����", "����", "���"
};

// ���� ��õ �Լ�
std::string recommendFood() {
    // ���� ������ ���� �õ� ����
    std::srand(std::time(0));

    // �������� ���� ����
    int randomIndex = std::rand() % foodList.size();
    return foodList[randomIndex];
}

int main() {
    // ���� ��õ �ޱ�
    std::string recommendedFood = recommendFood();

    // ��� ���
    std::cout << "������ ���� " << recommendedFood << "!!!" << std::endl;

    return 0;
}
