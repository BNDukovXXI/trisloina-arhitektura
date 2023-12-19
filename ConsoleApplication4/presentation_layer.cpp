// presentation_layer.cpp
#include <iostream>
#include "business_logic_layer.h"

int main() {
    std::cout << "Enter a number: ";
    int input;
    std::cin >> input;

    // Извикване на функция от бизнес логика слой
    int result = BusinessLogicLayer::processData(input);

    std::cout << "Result: " << result << std::endl;

    return 0;
}
