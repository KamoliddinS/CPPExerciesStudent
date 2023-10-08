#include <iostream>

int main() {
    // Declare a variable to store the length in meters
    double lengthMeters;

    // Prompt the user to enter the length in meters
    std::cout << "Enter the length in meters: ";
    std::cin >> lengthMeters;

    // Convert the length to inches (1 meter = 39.37 inches)
    double lengthInches = lengthMeters * 39.37;

    // Display the converted length in inches
    std::cout << "Length in inches: " << lengthInches << std::endl;

    return 0;
}
