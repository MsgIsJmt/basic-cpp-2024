// Book.cpp
#include "Book.h"
#include <iostream>

Book::Book(int id, double price, const std::string& producer, const std::string& ISBN, const std::string& author, const std::string& title)
    : Product(id, price, producer), ISBN(ISBN), author(author), title(title) {}

Book::~Book() {}

void Book::display() const {
    std::cout << "ISBN: " << ISBN << ", Author: " << author << ", Title: " << title << std::endl;
}

std::string Book::getType() const {
    return "Book";
}
