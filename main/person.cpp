//
// Created by Samuel Munyili on 2019-01-29.
//

#include <stdio.h>
#include <iostream>
#include "headers/person.h"

using namespace std;

class Person {
public:
    friend ostream &operator<<(ostream &os, const Person &person1) {
        os << "name: " << person1.name << " age: " << person1.age << " height: " << person1.height << " weight: "
           << person1.weight;
        return os;
    }

public:
    string name;
    int age;
    double height;
    double weight;

};
