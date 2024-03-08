/* Parent class
class Product : id, price, producer
	* Child class
	class Book : ISBN, author, title	// 978-89-001-0001-1
	class handphone : model, RAM
	class Computer : model, cpu, RAM
	* ��ü������ �迭 ��� : product[100]
	* string Ŭ���� ��� ����

	* ����ȭ��
	----- ��ǰ���� ���α׷� -------
	1 ��ǰ�߰� 2 ��ǰ��ȸ 3 ����

	>
	1 �Ǵ� 2�� ������ ���
	1å 2 �ڵ��� 3 ��ǻ��
	���� ����� ��� �ش� ��ǰ�� ������ �Ŀ� �߰�, ��� �Ǵ� �˻��� ����ȴ�.

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
        std::cout << "----- ��ǰ���� ���α׷� -------" << std::endl;
        std::cout << "1. ��ǰ�߰�  2. ��ǰ��ȸ  3. ����" << std::endl;
        std::cout << "> ";

        int choice;
        std::cin >> choice;

        if (choice == 1) {
            std::cout << "1. å  2. �ڵ���  3. ��ǻ��" << std::endl;
            std::cout << "��ǰ ������ �����ϼ���: ";
            int productType;
            std::cin >> productType;

            int id;
            double price;
            std::string producer;

            std::cout << "��ǰ ������ �Է��ϼ��� (ID, Price, Producer): ";
            std::cin >> id >> price;
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // Clear the input buffer
            std::getline(std::cin, producer);

            if (productType == 1) {
                std::string ISBN, author, title;
                std::cout << "å ������ �Է��ϼ��� (ISBN, Author, Title): ";
                std::getline(std::cin, ISBN);
                std::getline(std::cin, author);
                std::getline(std::cin, title);

                products[count] = new Book(id, price, producer, ISBN, author, title);
            }
            else if (productType == 2) {
                std::string model, RAM;
                std::cout << "�ڵ��� ������ �Է��ϼ��� (Model, RAM): ";
                std::getline(std::cin, model);
                std::getline(std::cin, RAM);

                products[count] = new Handphone(id, price, producer, model, RAM);
            }
            else if (productType == 3) {
                std::string model, cpu, RAM;
                std::cout << "��ǻ�� ������ �Է��ϼ��� (Model, CPU, RAM): ";
                std::getline(std::cin, model);
                std::getline(std::cin, cpu);
                std::getline(std::cin, RAM);

                products[count] = new Computer(id, price, producer, model, cpu, RAM);
            }

            count++;
        }
        else if (choice == 2) {
            std::cout << "��ǰ ��ȸ" << std::endl;
            for (int i = 0; i < count; ++i) {
                products[i]->display();
                std::cout << "--------------------------" << std::endl;
            }
        }
        else if (choice == 3) {
            // ����
            break;
        }
        else {
            std::cout << "�߸��� �����Դϴ�. �ٽ� �����ϼ���." << std::endl;
        }

        // �Է� ���� ����
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    // �������� �Ҵ�� �޸� ����
    for (int i = 0; i < count; ++i) {
        delete products[i];
    }

    return 0;
    }