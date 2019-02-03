//
// Created by Samuel Munyili on 02/02/19.
//

#ifndef EDX_INTERMEDIATE_PERSON_H
#define EDX_INTERMEDIATE_PERSON_H

#include <iostream>
#include <stdio.h>

using namespace std;

class Person {

private:
    string firstName;
    string lastName;
    string race;
    int age;

protected:
    int phone;

public:
    Person();

    Person(string, string, int, string, int);

    virtual void OutputIdentity() = 0;

    virtual void OutputAge();

    void setFirstName(string);
    void setLastName(string);
    void setRace(string);
    void setPhone(int);
    void setAge(int);

    int getAge();
    string getFirstName();
    string getLastName();
    string getRace();
    int getPhone();

};

#endif //EDX_INTERMEDIATE_PERSON_H
