// main.cpp
#include "student.h"
#include <iostream>

int main() {
    // Створення об'єктів класу Student
    Student student1("John", "Doe", 85.5);
    Student student2("Jane", "Smith", 92.0);

    // Виклик методів для виведення інформації про студентів
    student1.displayInfo();
    std::cout << "----------------------" << std::endl;
    student2.displayInfo();

    return 0;
}
