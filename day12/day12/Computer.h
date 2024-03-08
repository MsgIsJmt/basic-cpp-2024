// Computer.h
#ifndef COMPUTER_H
#define COMPUTER_H

#include "Product.h"

class Computer : public Product {
public:
    std::string model;
    std::string cpu;
    std::string RAM;

    Computer(int id, double price, const std::string& producer, const std::string& model, const std::string& cpu, const std::string& RAM);
    virtual ~Computer();

    virtual void display() const override;
    virtual std::string getType() const override;
};

#endif
