#include <iostream>
#include <cmath>

int main() {
    const double pi = 3.14159; // Approximate value of pi

    // Declare a variable to store the radius
    double radius;

    // Prompt the user to enter the radius of the circle
    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;

    // Calculate the area of the circle
    double area = pi * std::pow(radius, 2);

    // Display the calculated area
    std::cout << "The area of the circle is: " << area << std::endl;

    return 0;
}
