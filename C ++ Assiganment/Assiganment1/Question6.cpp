/*
	Write a C++ program to calculate area of circle.  
	Area = p * r * r 
*/
#include <iostream>  // Required for input and output operations
#define PI 3.14159    // Define the value of p (Pi)

int main() {
    float radius, area;  // Variables for radius and area

    // Input the radius of the circle
    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;

    // Calculate the area of the circle
    area = PI * radius * radius;

    // Display the calculated area
    std::cout << "The area of the circle is: " << area << std::endl;

    return 0;  // Indicating successful program termination
}

