// Handphone.cpp
#include "Handphone.h"
#include <iostream>

Handphone::Handphone(int id, double price, const std::string& producer, const std::string& _model, const std::string& _RAM)
    : Product(id, price, producer), model(model), RAM(RAM) {}

Handphone::~Handphone() {}

void Handphone::display() const {
    std::cout << "Model: " << model << ", RAM: " << RAM << std::endl;
}

std::string Handphone::getType() const {
    return "Handphone";
}
