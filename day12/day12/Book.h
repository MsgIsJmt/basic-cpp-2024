// Book.h
#ifndef BOOK_H
#define BOOK_H

#include "Product.h"

class Book : public Product {
public:
    std::string ISBN;
    std::string author;
    std::string title;

    Book(int id, double price, const std::string& producer, const std::string& ISBN, const std::string& author, const std::string& title);
    virtual ~Book();

    virtual void display() const override;
    virtual std::string getType() const override;
};

#endif
