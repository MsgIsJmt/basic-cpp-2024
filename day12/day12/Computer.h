// Computer.h
#ifndef COMPUTER_H
#define COMPUTER_H

#include "Product.h"

class Computer : public Product {
public:
    std::string model;
    std::string cpu;
    std::string RAM;

    Computer(int id, double price, const std::string& producer, const std::string& _model, const std::string& _cpu, const std::string& _RAM);
    virtual ~Computer();

    virtual void display() const override;
    virtual std::string getType() const override;
};

#endif
