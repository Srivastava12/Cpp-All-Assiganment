/*
   Write a C++ program to input marks of five subjects of a student and calculate total marks 
   and percentage
*/
#include <iostream>  // Required for input and output operations

int main() {
    float marks[5];  // Array to store marks of 5 subjects
    float total = 0, percentage;  // Variables for total marks and percentage

    // Input marks for 5 subjects
    std::cout << "Enter the marks of 5 subjects:\n";
    for (int i = 0; i < 5; i++) {
        std::cout << "Subject " << i + 1 << ": ";
        std::cin >> marks[i];  // Input marks for each subject
        total += marks[i];  // Add marks to total
    }

    // Calculate percentage (assuming each subject is out of 100)
    percentage = (total / 500) * 100;

    // Display the total marks and percentage
    std::cout << "Total Marks: " << total << std::endl;
    std::cout << "Percentage: " << percentage << "%" << std::endl;

    return 0;  // Indicating successful program termination
}

