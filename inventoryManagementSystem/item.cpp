#include "Item.h"
#include <iostream>

Item::Item(const std::string& n, const std::string& loc, int q, const std::string& b, const std::string& s)
    : name(n), location(loc), quantity(q), brand(b), size(s) {}

std::string Item::getName() const { return name; }
std::string Item::getLocation() const { return location; }
int Item::getQuantity() const { return quantity; }
std::string Item::getBrand() const { return brand; }
std::string Item::getSize() const { return size; }
void Item::setQuantity(int q) { quantity = q; }

void Item::displayDetails() const {
    std::cout << "Item: " << name << ", Location: " << location << ", Quantity: " << quantity
              << ", Brand: " << brand << ", Size: " << size << "\n";
}
