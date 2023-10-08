#include <iostream>

int main() {
    int totalDays;

    // Prompt the user to enter the number of days
    std::cout << "Enter the number of days: ";
    std::cin >> totalDays;

    // Calculate years, months, and remaining days
    int years = totalDays / 365;
    int remainingDays = totalDays % 365;
    int months = remainingDays / 30;
    int days = remainingDays % 30;

    // Display the result
    std::cout << "Equivalent: " << years << " years " << months << " months " << days << " days" << std::endl;

    return 0;
}
