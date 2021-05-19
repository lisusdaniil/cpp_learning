#include <iostream>
#include "Sales_item.h"

int main() {
    Sales_item item, sum;
    int idx = 0;
    while (std::cin >> item){
        if (idx == 0) sum = item;
        else sum += item;
        idx++;
    }
    std::cout << sum << std::endl;
    return 0;
}