//
// Created by Samuel Munyili on 2019-01-29.
//

#ifndef NAOLSOFT_COURSE_H
#define NAOLSOFT_COURSE_H

#include <string>
#include "Student.h"
#include "Teacher.h"

using namespace std;

class Course {
public:
    Course();

    string title;

    Student students[3];
    Teacher teacher;

    ~Course();

    const string &getTitle() const;

    void setTitle(const string &title);

    const Student *getStudents() const;

    const Teacher &getTeacher() const;

    void setTeacher(const Teacher &teacher);
};

#endif //NAOLSOFT_COURSE_H
