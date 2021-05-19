#include <iostream>

int main() {
    int val1 = 0, val2 = 0;
    std::cout << "Please enter two numbers" << std::endl;
    std::cin >> val1 >> val2;
    std::cout << "The values from " << val1 << " to " << val2 << " are:" << std::endl;
    
    while (val1 > val2 || val2 > val1) {
        std::cout << val1 << std::endl;
        if (val1 >= val2) {
            --val1;
        }
        else {
            ++val1;
        }
    }
    // print last value
    std::cout << val1 << std::endl;
}