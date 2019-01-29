//
// Created by Samuel Munyili on 2019-01-29.
//
#include <stdio.h>
#include <iostream>
#include "headers/memory.h"

using namespace std;

class Memory {
    int* pInt = new int;

    double* pDouble = new double;

public:
    void printValues() {
        *pDouble = 100;

        cout << "The double is "<< *pDouble << endl;

        delete pDouble;

        cout << "The double is "<< pDouble << endl;

    }
};

class Person{
private:
    string firstName;
    string lastName;

    int age;

public:
    Person(){
        cout<<"This is the default constructor" << endl;
    }

    Person(string firstName, string lastName, int age){
        this->age = age;
        this->firstName= firstName;
        this->lastName = lastName;
    }

    ~Person(){
        cout << "The destructor was called" << endl;
    }

    const string &getFirstName() const {
        return firstName;
    }

    void setFirstName(const string &firstName) {
        Person::firstName = firstName;
    }

    const string &getLastName() const {
        return lastName;
    }

    void setLastName(const string &lastName) {
        Person::lastName = lastName;
    }

    int getAge() const {
        return age;
    }

    void setAge(int age) {
        Person::age = age;
    }

    friend ostream &operator<<(ostream &os, const Person &person) {
        os << "firstName: " << person.firstName << " lastName: " << person.lastName << " age: " << person.age;
        return os;
    }
};
