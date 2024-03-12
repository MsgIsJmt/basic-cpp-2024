#include <iostream>

int main() {
    char ary[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
    const int length = sizeof(ary) / sizeof(ary[0]);

    std::cout << "���� �迭: ";
    for (int i = 0; i < length; ++i) {
        std::cout << ary[i] << " ";
    }
    std::cout << std::endl;

    int i = 0;
    while (i < length / 2) {
        // �迭�� �յڸ� ���� �ٲ۴�.
        char temp = ary[i];
        ary[i] = ary[length - 1 - i];
        ary[length - 1 - i] = temp;

        ++i;
    }

    std::cout << "�ٲ� �迭: ";
    for (int j = 0; j < length; ++j) {
        std::cout << ary[j] << " ";
    }
    std::cout << std::endl;

    return 0;
}
