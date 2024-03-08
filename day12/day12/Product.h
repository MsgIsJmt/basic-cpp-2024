// Product.h
#ifndef PRODUCT_H
#define PRODUCT_H

#include <iostream>
#include <string>

class Product {
public:
    int id;
    double price;
    std::string producer;

    Product(int id, double price, const std::string& producer);
    virtual ~Product();

    virtual void display() const = 0;
    virtual std::string getType() const = 0;
};

#endif
