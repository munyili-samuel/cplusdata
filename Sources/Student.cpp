#include <utility>

//
// Created by Samuel Munyili on 02/02/19.
//

#include "stdio.h"
#include "iostream"
#include "../Headers/Student.h"

using namespace std;

Student::Student() {}

Student::Student(string firstName, string lastName, int age, string race, int phone)
: Person(firstName, lastName, age, race, phone) {}

void Student::OutputIdentity() {
    cout << "I am a student" << endl;
}

void Student::OutputAge() {
    cout <<"I am a student " << endl;
    Person::OutputAge();
}
