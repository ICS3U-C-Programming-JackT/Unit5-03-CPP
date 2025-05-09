// Copyright (c) 2025 Jack Turcotte All rights reserved.
//
// Created by: Jack Turcotte
// Date: May 1st, 2025
// Grade program in c++

#include <iostream>
#include <string>

// Function to calculate and return mark
int calcMark(std::string level) {
    // Initialize newGrade
    int newGrade = 0;

    // If statements to determine grade level based on user input
    if (level == "4+") {
        newGrade = 98;
    } else if (level == "4") {
        newGrade = 91;
    } else if (level == "4-") {
        newGrade = 83;
    } else if (level == "3+") {
        newGrade = 78;
    } else if (level == "3") {
        newGrade = 75;
    } else if (level == "3-") {
        newGrade = 71;
    } else if (level == "2+") {
        newGrade = 68;
    } else if (level == "2") {
        newGrade = 64;
    } else if (level == "2-") {
        newGrade = 61;
    } else if (level == "1+") {
        newGrade = 58;
    } else if (level == "1") {
        newGrade = 54;
    } else if (level == "1-") {
        newGrade = 50;
    } else if (level == "0+") {
        newGrade = 45;
    } else if (level == "0") {
        newGrade = 41;
    } else if (level == "0-") {
        newGrade = 37;
    } else {
        // Invalid input scenario
        newGrade = 101;
    }

    // Return grade level
    return newGrade;
}

int main() {
    // Initialize levelInput
    std::string levelInput;

    // Get user input for level
    std::cout << "Enter your grade level for this course: ";
    std::cin >> levelInput;

    // Call calcMark function to get grade percent
    int gradePercent = calcMark(levelInput);

    // Check if input was valid or not, display accordingly
    if (gradePercent > 100) {
        std::cout << "\nYou entered an invalid level. You entered "
        << levelInput;
    } else {
        std::cout << "\nThe grade that you received for this class was "
        << gradePercent << "%";
    }
}
