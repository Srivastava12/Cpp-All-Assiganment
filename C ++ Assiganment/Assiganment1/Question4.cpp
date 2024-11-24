// Write a C++ program to enter Day Temperature of 5 cities of Gujarat. Display average temperature
#include <iostream>  // Required for input and output operations

int main() {
    float temperatures[5];  // Array to store the temperatures of 5 cities
    float total = 0, average;  // Variables for total and average

    // Loop to input temperatures for 5 cities
    std::cout << "Enter the day temperature of 5 cities in Gujarat:\n";
    for (int i = 0; i < 5; i++) {
        std::cout << "City " << i + 1 << ": ";
        std::cin >> temperatures[i];  // Input temperature for each city
        total += temperatures[i];  // Add temperature to total
    }

    // Calculate the average temperature
    average = total / 5;

    // Display the average temperature
    std::cout << "The average temperature of the 5 cities is: " << average << "°C" << std::endl;

    return 0;  // Indicating successful program termination
}

