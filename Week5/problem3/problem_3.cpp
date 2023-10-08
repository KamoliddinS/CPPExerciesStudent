#include <iostream>

int main() {
    int numCourses;

    // Prompt the user to enter the number of courses
    std::cout << "Enter the number of courses: ";
    std::cin >> numCourses;

    double totalCreditHours = 0.0;
    double totalGradePoints = 0.0;

    for (int i = 1; i <= numCourses; ++i) {
        double marks;
        int creditHours;

        // Prompt the user to enter marks and credit hours for each course
        std::cout << "Enter marks for Course " << i << ": ";
        std::cin >> marks;
        std::cout << "Enter credit hours for Course " << i << ": ";
        std::cin >> creditHours;

        // Calculate grade points for the course (assuming a 4.0 scale)
        double gradePoints = 0.0;

        if (marks >= 90) {
            gradePoints = 4.0;
        } else if (marks >= 80) {
            gradePoints = 3.0;
        } else if (marks >= 70) {
            gradePoints = 2.0;
        } else if (marks >= 60) {
            gradePoints = 1.0;
        } else {
            gradePoints = 0.0;
        }

        // Calculate total credit hours and grade points
        totalCreditHours += creditHours;
        totalGradePoints += gradePoints * creditHours;
    }

    // Calculate GPA
    double gpa = totalGradePoints / totalCreditHours;

    // Display the GPA
    std::cout << "GPA: " << gpa << std::endl;

    return 0;
}
