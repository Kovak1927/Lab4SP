// Student.cpp
#include "student.h"
#include <iostream>

// Визначення конструктора класу
Student::Student(std::string firstName, std::string lastName, double averageGrade)
        : firstName(firstName), lastName(lastName), averageGrade(averageGrade) {}

// Визначення методу для виведення інформації про студента
void Student::displayInfo() const {
    std::cout << "Name: " << firstName << " " << lastName << std::endl;
    std::cout << "Average Grade: " << averageGrade << std::endl;
}
