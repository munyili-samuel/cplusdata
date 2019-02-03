//
// Created by Samuel Munyili on 02/02/19.
//

#include "../Headers/Person.h"

using namespace std;

Person::Person() {}


Person::Person(string firstName, string lastName, int age, string race, int phone) {
    Person::firstName = firstName;
    Person::lastName = lastName;
    Person::race = race;
    Person::phone = phone;
    Person::age = age;
}

int Person::getAge() {
    return Person::age;
}

string Person::getFirstName() {
    return Person::firstName;
}

string Person::getLastName() { return Person::lastName; }

string Person::getRace() { return Person::race; }

int Person::getPhone() { return Person::phone; }

void Person::setAge(int age) { Person::age = age; }

void Person::setFirstName(string firstName) { Person::firstName = firstName; }

void Person::setLastName(string lastName) { Person::lastName = lastName; }

void Person::setRace(string race) { Person::race = race; }

void Person::setPhone(int phone) { Person::phone = phone; }

void Person::OutputAge() {
    cout << "I am " << Person::age << " years old" << endl;
}
