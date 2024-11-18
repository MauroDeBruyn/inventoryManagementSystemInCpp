#include "Tool.h"
#include <iostream>

Tool::Tool(const std::string& n, const std::string& loc, int q, const std::string& b, const std::string& s, const std::string& t)
    : Item(n, loc, q, b, s), type(t) {}

void Tool::displayDetails() const {
    std::cout << "Tool: " << name << ", Type: " << type << ", Location: " << location
              << ", Quantity: " << quantity << ", Brand: " << brand << ", Size: " << size << "\n";
}
