//Write a C++ program to display any number entered by the user
#include <iostream>  // Required for input and output operations

int main() {
    int number;  // Variable to store the user input

    // Prompt the user to enter a number
    std::cout << "Enter a number: ";
    std::cin >> number;  // Taking input from the user and storing it in the 'number' variable

    // Display the entered number
    std::cout << "You entered: " << number << std::endl;

    return 0;  // Indicating successful program termination
}

