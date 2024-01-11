#include <iostream>

int main() {
    // Declare variables to store user input
    double num1, num2;

    // Get input from the user
    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    // Error: Multiplying instead of adding
    double result = num1 * num2;

    // Display the result
    std::cout << "Result: " << result << std::endl;

    return 0;
}
