#ifndef ITEM_H
#define ITEM_H

#include <string>

// Base Class
class Item {
protected:
    std::string name;
    std::string location;
    int quantity;
    std::string brand;
    std::string size;

public:
    Item(const std::string& n, const std::string& loc, int q, const std::string& b, const std::string& s);
    virtual ~Item() = default;

    // Accessors
    std::string getName() const;
    std::string getLocation() const;
    int getQuantity() const;
    std::string getBrand() const;
    std::string getSize() const;
    void setQuantity(int q);

    // Polymorphic method
    virtual void displayDetails() const;
};

#endif // ITEM_H
