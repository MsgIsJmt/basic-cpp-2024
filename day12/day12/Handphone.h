// Handphone.h
#ifndef HANDPHONE_H
#define HANDPHONE_H

#include "Product.h"

class Handphone : public Product {
public:
    std::string model;
    std::string RAM;

    Handphone(int id, double price, const std::string& producer, const std::string& _model, const std::string& _RAM);
    virtual ~Handphone();

    virtual void display() const override;
    virtual std::string getType() const override;
};

#endif
