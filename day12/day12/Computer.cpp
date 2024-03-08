// Computer.cpp
#include "Computer.h"
#include <iostream>

Computer::Computer(int id, double price, const std::string& producer, const std::string& _model, const std::string& _cpu, const std::string& _RAM)
    : Product(id, price, producer), model(model), cpu(cpu), RAM(RAM) {}

Computer::~Computer() {}

void Computer::display() const {
    std::cout << "Model: " << model << ", CPU: " << cpu << ", RAM: " << RAM << std::endl;
}

std::string Computer::getType() const {
    return "Computer";
}
