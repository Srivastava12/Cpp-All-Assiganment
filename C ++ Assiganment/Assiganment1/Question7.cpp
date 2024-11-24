/*
   Write a C++ program to read two numbers from user and print their addition, subtraction, 
   multiplication and division on screen
*/
#include <iostream>  // Required for input and output operations

int main() {
    float num1, num2;  // Variables to store the two numbers

    // Input two numbers from the user
    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    // Perform and display the operations
    std::cout << "Addition: " << num1 + num2 << std::endl;
    std::cout << "Subtraction: " << num1 - num2 << std::endl;
    std::cout << "Multiplication: " << num1 * num2 << std::endl;
    
    // Check if the second number is not zero before performing division
    if (num2 != 0) {
        std::cout << "Division: " << num1 / num2 << std::endl;
    } else {
        std::cout << "Division by zero is not allowed." << std::endl;
    }

    return 0;  // Indicating successful program termination
}

