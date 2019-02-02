//
// Created by Samuel Munyili on 2019-01-29.
//

#include "stdio.h"
#include "iostream"
#include "../headers/Student.h"

using namespace std;

void Student::SitInClass() {
    cout << "Sitting in main theater" << endl;
}

Student::Student() {

}

Student::Student(string firstName, string lastName, int age, string address, string city, long phone) {
    Student::firstName = firstName;
    Student::lastName = lastName;
    Student::age = age;
    Student::address = address;
    Student::city = city;
    Student::phone = phone;
}

Student::~Student() {

}
