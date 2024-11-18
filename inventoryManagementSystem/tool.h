#ifndef TOOL_H
#define TOOL_H

#include "Item.h"

// Derived Class
class Tool : public Item {
    std::string type;

public:
    Tool(const std::string& n, const std::string& loc, int q, const std::string& b, const std::string& s, const std::string& t);
    void displayDetails() const override;
};

#endif // TOOL_H
