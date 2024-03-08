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
        std::cout << "----- ��ǰ���� ���α׷� -------" << std::endl;
        std::cout << "1. ��ǰ�߰�  2. ��ǰ���  3. ��ǰ�˻�  0. ����" << std::endl;
        std::cout << "> ";

        int choice;
        std::cin >> choice;

        if (choice == 0) {
            // ����
            break;
        }
        else if (choice == 1 || choice == 2 || choice == 3) {
            int subChoice;

            std::cout << "1. å  2. �ڵ���  3. ��ǻ��" << std::endl;
            std::cout << "��ǰ ������ �����ϼ���: ";
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
            std::cout << "�߸��� �����Դϴ�. �ٽ� �����ϼ���." << std::endl;
        }

        // �Է� ���� ����
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    // �������� �Ҵ��� ��ǰ ��ü���� ����
    for (const auto& product : products) {
        delete product;
    }

    return 0;
}

void displayProducts(const std::vector<const Product*>& products) {
    if (products.empty()) {
        std::cout << "��ϵ� ��ǰ�� �����ϴ�." << std::endl;
    }
    else {
        std::cout << "��ǰ ���" << std::endl;
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

    std::cout << "��ǰ ������ �Է��ϼ��� (ID, Price, Producer): ";
    std::cin >> id >> price;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // Clear the input buffer

    std::cout << "Producer �Է�: ";
    std::getline(std::cin, producer);

    if (productType == 1) {
        std::string ISBN, author, title;
        std::cout << "å ������ �Է��ϼ��� (ISBN, Author, Title): ";
        std::getline(std::cin, ISBN);
        std::getline(std::cin, author);
        std::getline(std::cin, title);

        products.push_back(new Book(id, price, producer, ISBN, author, title));
    }
    else if (productType == 2) {
        std::string model, RAM;
        std::cout << "�ڵ��� ������ �Է��ϼ��� (Model, RAM): ";
        std::getline(std::cin, model);
        std::getline(std::cin, RAM);

        products.push_back(new Handphone(id, price, producer, model, RAM));
    }
    else if (productType == 3) {
        std::string model, cpu, RAM;
        std::cout << "��ǻ�� ������ �Է��ϼ��� (Model, CPU, RAM): ";
        std::getline(std::cin, model);
        std::getline(std::cin, cpu);
        std::getline(std::cin, RAM);

        products.push_back(new Computer(id, price, producer, model, cpu, RAM));
    }
    else {
        std::cout << "�߸��� ��ǰ �����Դϴ�." << std::endl;
    }
}

void searchProduct(const std::vector<const Product*>& products, int productType) {
    if (products.empty()) {
        std::cout << "��ϵ� ��ǰ�� �����ϴ�." << std::endl;
        return;
    }

    std::cout << "��ǰ �˻�" << std::endl;
    std::cout << "1. å  2. �ڵ���  3. ��ǻ��" << std::endl;
    std::cout << "��ǰ ������ �����ϼ���: ";

    int searchId;
    std::cout << "��ǰ ID�� �Է��ϼ���: ";
    std::cin >> searchId;

    bool found = false;

    for (const auto& product : products) {
        if (product->id == searchId && product->getType() == "Book" && productType == 1) {
            std::cout << "å ";
            product->display();
            std::cout << "--------------------------" << std::endl;
            found = true;
            break;
        }
        else if (product->id == searchId && product->getType() == "Handphone" && productType == 2) {
            std::cout << "�ڵ��� ";
            product->display();
            std::cout << "--------------------------" << std::endl;
            found = true;
            break;
        }
        else if (product->id == searchId && product->getType() == "Computer" && productType == 3) {
            std::cout << "��ǻ�� ";
            product->display();
            std::cout << "--------------------------" << std::endl;
            found = true;
            break;
        }
    }

    if (!found) {
        std::cout << "�ش� ��ǰ�� �����ϴ�." << std::endl;
    }
}


