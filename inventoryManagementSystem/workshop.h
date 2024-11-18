#ifndef WORKSHOP_H
#define WORKSHOP_H

#include "Item.h"
#include <vector>
#include <memory>
#include <string>

// Composition Class
class Workshop {
    std::vector<std::shared_ptr<Item>> items;

public:
    void addItem(const std::shared_ptr<Item>& item);
    void displayInventory() const;
    void findItemBySizeAndBrand(const std::string& size, const std::string& brand) const;
};

#endif // WORKSHOP_H
