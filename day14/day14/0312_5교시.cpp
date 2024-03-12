#include <iostream>

int main() {
    char ary[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
    const int length = sizeof(ary) / sizeof(ary[0]);

    std::cout << "원본 배열: ";
    for (int i = 0; i < length; ++i) {
        std::cout << ary[i] << " ";
    }
    std::cout << std::endl;

    int i = 0;
    while (i < length / 2) {
        // 배열의 앞뒤를 서로 바꾼다.
        char temp = ary[i];
        ary[i] = ary[length - 1 - i];
        ary[length - 1 - i] = temp;

        ++i;
    }

    std::cout << "바뀐 배열: ";
    for (int j = 0; j < length; ++j) {
        std::cout << ary[j] << " ";
    }
    std::cout << std::endl;

    return 0;
}
