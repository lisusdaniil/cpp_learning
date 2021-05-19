#include <iostream>
#include "Sales_item.h"
 
int main() {
    Sales_item item1, item2;
    int count = 1;

    if (std::cin >> item1) {
        while (std::cin >> item2){
            std::cout << item2.isbn() << std::endl;
            if (item1.isbn() == item2.isbn()) {
                count++;
            }
            else {
                // Print results for previous item
                std::cout << "The ISBN " << item1.isbn() << " has " << count << " transactions" << std::endl;
                count = 1;  // Reset counter
                item1 = item2;  // Move item2 into current ISBN slot
            }
        }
        // Print final result
        std::cout << "The ISBN " << item1.isbn() << " has " << count << " transactions" << std::endl;
        return 0;
    }
    else {
        std::cerr << "No data?!" << std::endl;
        return -1;
    }
}