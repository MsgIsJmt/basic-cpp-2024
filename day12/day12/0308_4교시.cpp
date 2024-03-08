/* Parent class
class Product : id, price, producer
	* Child class
	class Book : ISBN, author, title	// 978-89-001-0001-1
	class handphone : model, RAM
	class Computer : model, cpu, RAM
	* 객체포인터 배열 사용 : product[100]
	* string 클래스 사용 가능

	* 메인화면
	----- 상품관리 프로그램 -------
	1 상품추가 2 상품조회 3 종료

	>
	1 또는 2를 선택한 경우
	1책 2 핸드폰 3 컴퓨터
	선택 목록을 띄워 해당 상품을 선택한 후에 추가, 출력 또는 검색이 실행된다.

	*/

#include <iostream>
#include <string>
#include <limits>

class Product {
public:
    int id;
    double price;
    std::string producer;

    Product(int _id, double _price, const std::string& _producer)
        : id(_id), price(_price), producer(_producer) {}

    virtual void display() const {
        std::cout << "ID: " << id << ", Price: " << price << ", Producer: " << producer << std::endl;
    }
};

class Book : public Product {
public:
    std::string ISBN;
    std::string author;
    std::string title;

    Book(int _id, double _price, const std::string& _producer, const std::string& _ISBN, const std::string& _author, const std::string& _title)
        : Product(_id, _price, _producer), ISBN(_ISBN), author(_author), title(_title) {}

    void display() const override {
        Product::display();
        std::cout << "ISBN: " << ISBN << ", Author: " << author << ", Title: " << title << std::endl;
    }
};

class Handphone : public Product {
public:
    std::string model;
    std::string RAM;

    Handphone(int _id, double _price, const std::string& _producer, const std::string& _model, const std::string& _RAM)
        : Product(_id, _price, _producer), model(_model), RAM(_RAM) {}

    void display() const override {
        Product::display();
        std::cout << "Model: " << model << ", RAM: " << RAM << std::endl;
    }
};

class Computer : public Product {
public:
    std::string model;
    std::string cpu;
    std::string RAM;

    Computer(int _id, double _price, const std::string& _producer, const std::string& _model, const std::string& _cpu, const std::string& _RAM)
        : Product(_id, _price, _producer), model(_model), cpu(_cpu), RAM(_RAM) {}

    void display() const override {
        Product::display();
        std::cout << "Model: " << model << ", CPU: " << cpu << ", RAM: " << RAM << std::endl;
    }
};

int main() {
    const int maxSize = 100;
    Product* products[maxSize];
    int count = 0;

    while (true) {
        std::cout << "----- 상품관리 프로그램 -------" << std::endl;
        std::cout << "1. 상품추가  2. 상품조회  3. 종료" << std::endl;
        std::cout << "> ";

        int choice;
        std::cin >> choice;

        if (choice == 1) {
            std::cout << "1. 책  2. 핸드폰  3. 컴퓨터" << std::endl;
            std::cout << "상품 종류를 선택하세요: ";
            int productType;
            std::cin >> productType;

            int id;
            double price;
            std::string producer;

            std::cout << "상품 정보를 입력하세요 (ID, Price, Producer): ";
            std::cin >> id >> price;
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // Clear the input buffer
            std::getline(std::cin, producer);

            if (productType == 1) {
                std::string ISBN, author, title;
                std::cout << "책 정보를 입력하세요 (ISBN, Author, Title): ";
                std::getline(std::cin, ISBN);
                std::getline(std::cin, author);
                std::getline(std::cin, title);

                products[count] = new Book(id, price, producer, ISBN, author, title);
            }
            else if (productType == 2) {
                std::string model, RAM;
                std::cout << "핸드폰 정보를 입력하세요 (Model, RAM): ";
                std::getline(std::cin, model);
                std::getline(std::cin, RAM);

                products[count] = new Handphone(id, price, producer, model, RAM);
            }
            else if (productType == 3) {
                std::string model, cpu, RAM;
                std::cout << "컴퓨터 정보를 입력하세요 (Model, CPU, RAM): ";
                std::getline(std::cin, model);
                std::getline(std::cin, cpu);
                std::getline(std::cin, RAM);

                products[count] = new Computer(id, price, producer, model, cpu, RAM);
            }

            count++;
        }
        else if (choice == 2) {
            std::cout << "상품 조회" << std::endl;
            for (int i = 0; i < count; ++i) {
                products[i]->display();
                std::cout << "--------------------------" << std::endl;
            }
        }
        else if (choice == 3) {
            // 종료
            break;
        }
        else {
            std::cout << "잘못된 선택입니다. 다시 선택하세요." << std::endl;
        }

        // 입력 버퍼 정리
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    // 동적으로 할당된 메모리 해제
    for (int i = 0; i < count; ++i) {
        delete products[i];
    }

    return 0;
    }