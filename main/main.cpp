#include <iostream>
#include "headers/Student.h"
#include "headers/Teacher.h"
#include "headers/Course.h"

using namespace std;

int main() {

    Student *student1 = new Student(
            "Samuel",
            "Munyili",
            29,
            "Mirema",
            "Nairobi",
            12345
    );
    Student *student2 = new Student(
            "Esther",
            "Mutua",
            21,
            "Ruaraka",
            "Nairobi",
            123456
    );
    Student *student3 = new Student(
            "Derrick",
            "Korir",
            25,
            "Zimmer",
            "Nairobi",
            1234567
    );

    Teacher *teacher = new Teacher(
            "Kesiena",
            "Akpobome",
            21,
            "Dojo",
            "Lagos",
            987654321
    );


    Course *course = new Course();
    course->title = "Intermediate C++";
    course->students[0] = *student1;
    course->students[1] = *student2;
    course->students[2] = *student3;

    course->teacher = *teacher;

    cout << "The course is " << course->title << endl;

    course->teacher.GradeStudent();

    return 0;
}
