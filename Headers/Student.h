//
// Created by Samuel Munyili on 02/02/19.
//

#ifndef EDX_INTERMEDIATE_STUDENT_H
#define EDX_INTERMEDIATE_STUDENT_H

#include "Person.h"

class Student : public Person {
public:
    Student();

    Student(string, string, int, string, int);

    ~Student();

    void OutputIdentity() override;

    void OutputAge() override;

};

#endif //EDX_INTERMEDIATE_STUDENT_H
