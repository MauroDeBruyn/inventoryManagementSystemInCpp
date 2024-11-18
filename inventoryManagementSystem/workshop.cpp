#include "Workshop.h"
#include <iostream>

void Workshop::addItem(const std::shared_ptr<Item>& item) {
    items.push_back(item);
}

void Workshop::displayInventory() const {
    std::cout << "Workshop Inventory Details:\n";
    for (const auto& item : items) {
        item->displayDetails();
    }
}

void Workshop::findItemBySizeAndBrand(const std::string& size, const std::string& brand) const {
    std::cout << "Searching for items with Size: " << size << " and Brand: " << brand << "\n";
    for (const auto& item : items) {
        if (item->getSize() == size && item->getBrand() == brand) {
            item->displayDetails();
        }
    }
}
