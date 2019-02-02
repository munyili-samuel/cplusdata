//
// Created by Samuel Munyili on 2019-01-30.
//

#include "stdio.h"
#include "iostream"
#include "../headers/Teacher.h"

using namespace std;


void Teacher::GradeStudent() {
    cout << "Student graded" << endl;
}

void Teacher::SitInClass() {
cout << "Sitting at front of class" << endl;
}

Teacher::Teacher() {

}

Teacher::Teacher(string firstName, string lastName, int age, string address, string city, long phone) {
    Teacher::firstName = firstName;
    Teacher::lastName = lastName;
    Teacher::age = age;
    Teacher::address = address;
    Teacher::city = city;
    Teacher::phone = phone;
}

Teacher::~Teacher() {

}

const string &Teacher::getLastName() const {
    return Teacher::lastName;
}

void Teacher::setLastName(const string &lastName) {
    Teacher::lastName = lastName;
}
