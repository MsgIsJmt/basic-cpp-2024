// Book.h
#ifndef BOOK_H
#define BOOK_H

#include "Product.h"

class Book : public Product {
public:
    std::string ISBN;
    std::string author;
    std::string title;

    Book(int id, double price, const std::string& producer, const std::string& _ISBN, const std::string& _author, const std::string& _title);
    virtual ~Book();

    virtual void display() const override;
    virtual std::string getType() const override;
};

#endif
