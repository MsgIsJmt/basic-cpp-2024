// main.cpp
#include "Product.h"
#include "Book.h"
#include "Handphone.h"
#include "Computer.h"
#include <iostream>
#include <vector>
#include <limits>

void displayProducts(const std::vector<const Product*>& products);
void addProduct(std::vector<const Product*>& products, int productType);
void searchProduct(const std::vector<const Product*>& products, int productType);

int main() {
    std::vector<const Product*> products;

    while (true) {
        std::cout << "----- 상품관리 프로그램 -------" << std::endl;
        std::cout << "1. 상품추가  2. 상품출력  3. 상품검색  0. 종료" << std::endl;
        std::cout << "> ";

        int choice;
        std::cin >> choice;

        if (choice == 0) {
            // 종료
            break;
        }
        else if (choice == 1 || choice == 2 || choice == 3) {
            int subChoice;

            std::cout << "1. 책  2. 핸드폰  3. 컴퓨터" << std::endl;
            std::cout << "상품 종류를 선택하세요: ";
            std::cin >> subChoice;

            if (choice == 1) {
                addProduct(products, subChoice);
            }
            else if (choice == 2) {
                displayProducts(products);
            }
            else if (choice == 3) {
                searchProduct(products, subChoice);
            }
        }
        else {
            std::cout << "잘못된 선택입니다. 다시 선택하세요." << std::endl;
        }

        // 입력 버퍼 정리
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    // 동적으로 할당한 상품 객체들을 삭제
    for (const auto& product : products) {
        delete product;
    }

    return 0;
}

void displayProducts(const std::vector<const Product*>& products) {
    if (products.empty()) {
        std::cout << "등록된 상품이 없습니다." << std::endl;
    }
    else {
        std::cout << "상품 출력" << std::endl;
        for (const auto& product : products) {
            std::cout << product->getType() << " ";
            product->display();
            std::cout << "--------------------------" << std::endl;
        }
    }
}

void addProduct(std::vector<const Product*>& products, int productType) {
    int id;
    double price;
    std::string producer;

    std::cout << "상품 정보를 입력하세요 (ID, Price, Producer): ";
    std::cin >> id >> price;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // Clear the input buffer



    if (productType == 1) {
        std::string _ISBN, _author, _title;
        std::cout << "책 정보를 입력하세요 (ISBN, Author, Title): ";
        std::getline(std::cin, _ISBN);
        std::getline(std::cin, _author);
        std::getline(std::cin, _title);

        products.push_back(new Book(id, price, producer, _ISBN, _author, _title));
    }
    else if (productType == 2) {
        std::string _model, _RAM;
        std::cout << "핸드폰 정보를 입력하세요 (Model, RAM): ";
        std::getline(std::cin, _model);
        std::getline(std::cin, _RAM);

        products.push_back(new Handphone(id, price, producer, _model, _RAM));
    }
    else if (productType == 3) {
        std::string _model, _cpu, _RAM;
        std::cout << "컴퓨터 정보를 입력하세요 (Model, CPU, RAM): ";
        std::getline(std::cin, _model);
        std::getline(std::cin, _cpu);
        std::getline(std::cin, _RAM);

        products.push_back(new Computer(id, price, producer, _model, _cpu, _RAM));
    }
    else {
        std::cout << "잘못된 상품 종류입니다." << std::endl;
    }
}

void searchProduct(const std::vector<const Product*>& products, int productType) {
    if (products.empty()) {
        std::cout << "등록된 상품이 없습니다." << std::endl;
        return;
    }

    std::cout << "상품 검색" << std::endl;
    std::cout << "1. 책  2. 핸드폰  3. 컴퓨터" << std::endl;
    std::cout << "상품 종류를 선택하세요: ";

    int searchId;
    std::cout << "상품 ID를 입력하세요: ";
    std::cin >> searchId;

    bool found = false;

    for (const auto& product : products) {
        if (product->id == searchId && product->getType() == "Book" && productType == 1) {
            std::cout << "책 ";
            product->display();
            std::cout << "--------------------------" << std::endl;
            found = true;
            break;
        }
        else if (product->id == searchId && product->getType() == "Handphone" && productType == 2) {
            std::cout << "핸드폰 ";
            product->display();
            std::cout << "--------------------------" << std::endl;
            found = true;
            break;
        }
        else if (product->id == searchId && product->getType() == "Computer" && productType == 3) {
            std::cout << "컴퓨터 ";
            product->display();
            std::cout << "--------------------------" << std::endl;
            found = true;
            break;
        }
    }

    if (!found) {
        std::cout << "해당 상품이 없습니다." << std::endl;
    }
}


