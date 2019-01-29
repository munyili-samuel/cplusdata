#include <iostream>
#include "memory.cpp"
#include "references.cpp"

using namespace std;


int main() {

    cout << "Working with pointers ......" << endl;

    Memory memory{};

    memory.printValues();


    Person *person = new Person{"Samuel", "Munyili", 29};

    cout << "The person is: FirstName: "<< person->getFirstName() << ", Last Name: " << person->getLastName()
    << " and age: " << person->getAge() << endl;

    delete person;

    cout << "After all that.....\nThe person is: FirstName: "<< person->getFirstName() << ", Last Name: " << person->getLastName()
         << " and age: " << person->getAge() << endl;

    return 0;
}
