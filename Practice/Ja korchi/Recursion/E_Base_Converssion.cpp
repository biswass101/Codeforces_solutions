#include <iostream>

void decimalToBinary(int decimal) {
    if (decimal == 0) {
        std::cout << "Binary equivalent: 0" << std::endl;
        return;
    }
    
    int binary = 0;
    int base = 1;
    
    while (decimal > 0) {
        binary += (decimal % 2) * base;
        decimal /= 2;
        base *= 10;
    }
    
    std::cout << "Binary equivalent: " << binary << std::endl;
}

int main() {
    int decimal;
    std::cout << "Enter a decimal number: ";
    std::cin >> decimal;
    
    decimalToBinary(decimal);
    
    return 0;
}
#include <iostream>

void decimalToBinary(int decimal) {
    if (decimal == 0) {
        std::cout << "Binary equivalent: 0" << std::endl;
        return;
    }
    
    int binary = 0;
    int base = 1;
    
    while (decimal > 0) {
        binary += (decimal % 2) * base;
        decimal /= 2;
        base *= 10;
    }
    
    std::cout << "Binary equivalent: " << binary << std::endl;
}

int main() {
    int decimal;
    std::cout << "Enter a decimal number: ";
    std::cin >> decimal;
    
    decimalToBinary(decimal);
    
    return 0;
}
