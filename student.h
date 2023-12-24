// Student.h
#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student {
public:
    // Конструктор класу
    Student(std::string firstName, std::string lastName, double averageGrade);

    // Метод для виведення інформації про студента
    void displayInfo() const;

private:
    std::string firstName;
    std::string lastName;
    double averageGrade;
};

#endif // STUDENT_H
