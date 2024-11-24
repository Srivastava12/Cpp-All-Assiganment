//Write a C++ program to input three numbers and display its total and average
#include <iostream>  // Required for input and output operations

int main() {
    float num1, num2, num3;  // Variables to store the user input
    float total, average;    // Variables to store total and average

    // Prompt the user to enter three numbers
    std::cout << "Enter three numbers: ";
    std::cin >> num1 >> num2 >> num3;  // Taking input for three numbers

    // Calculate total and average
    total = num1 + num2 + num3;
    average = total / 3;

    // Display the total and average
    std::cout << "Total: " << total << std::endl;
    std::cout << "Average: " << average << std::endl;

    return 0;  // Indicating successful program termination
}

