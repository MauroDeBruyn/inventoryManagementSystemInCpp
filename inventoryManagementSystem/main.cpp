#include "Workshop.h"
#include "Tool.h"
#include <memory>

int main() {
    std::shared_ptr<Item> item1 = std::make_shared<Item>("Screw Pack", "A1 Shelf", 100, "FastenCo", "M4");
    std::shared_ptr<Item> tool1 = std::make_shared<Tool>("Cordless Drill", "B2 Cabinet", 5, "ToolMaster", "Medium", "Power Tool");

    Workshop workshop;
    workshop.addItem(item1);
    workshop.addItem(tool1);

    // Display all items
    workshop.displayInventory();

    // Search for a specific item
    workshop.findItemBySizeAndBrand("M4", "FastenCo");

    return 0;
}
