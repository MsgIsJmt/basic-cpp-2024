// Product.cpp
#include "Product.h"

Product::Product(int id, double price, const std::string& producer)
    : id(id), price(price), producer(producer) {}

Product::~Product() {}
