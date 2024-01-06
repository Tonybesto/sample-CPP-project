#include <iostream>

int main() {
    int x;
    std::cout << "Enter a number: ";
    std::cin >> x;

    // Error: Trying to divide by zero
    int result = 10 / 0;

    std::cout << "Result: " << result << std::endl;

    return 0;
}
