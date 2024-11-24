/*
  Write a C++ program to find simple interest.  
  SI = (P*R*N)/100   With float  values
*/
#include <iostream>  // Required for input and output operations

int main() {
    float principal, rate, time, simpleInterest;  // Variables for principal, rate, time, and SI

    // Input values for Principal, Rate of interest, and Time period
    std::cout << "Enter the Principal amount (P): ";
    std::cin >> principal;

    std::cout << "Enter the Rate of interest (R): ";
    std::cin >> rate;

    std::cout << "Enter the Time period in years (N): ";
    std::cin >> time;

    // Calculate Simple Interest
    simpleInterest = (principal * rate * time) / 100;

    // Display the calculated Simple Interest
    std::cout << "The Simple Interest is: " << simpleInterest << std::endl;

    return 0;  // Indicating successful program termination
}

