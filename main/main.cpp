#include <iostream>
#include "memory.cpp"
#include "references.cpp"
#include "person.cpp"

using namespace std;

void PassByValue(int num1) {
    cout << "Inside the PassByValue function" << endl;
    num1 += 100;
    cout << "Inside the PassByValue the value of num1 is now " << num1 << endl;
}

void PassByRef(int &pNum) {
    cout << "Inside the PassByValue function" << endl;
    pNum = 50;
    cout << "Inside the PassByValue the value of pNum is now " << pNum << endl;
}

void ModifyPerson(Person &person) {
    cout << "\n\nModifying ....... " << endl;
    person.height = 185;
    person.age = 35;
    person.name = "Sam Junior";
    person.weight = 75;
}

int main() {
    int num1;

    int *pNum = new int;

    num1 = 3;
    *pNum = 5;

    PassByValue(num1);

    cout << "Inside the main function num1 is " << num1 << endl;

    PassByRef(*pNum);

    cout << "Inside the main function pNum is " << *pNum << endl;

    PassByValue(*pNum);


    auto *pDouble = new double;
    *pDouble = 10;

    cout << "Before Deallocate pDouble is now " << *pDouble << endl;

    delete pDouble;

    cout << "After Deallocate pDouble is now " << *pDouble << endl;

    Person person{"Samuel Munyili", 29, 183, 68};

    cout << "The person is:\nAge = " << person.age
         << "\nName: " << person.name
         << "\nWeight: " << person.weight
         << "\nHeight: " << person.height
         << endl;

    ModifyPerson(person);

    cout << "The person is:\nAge = " << person.age
         << "\nName: " << person.name
         << "\nWeight: " << person.weight
         << "\nHeight: " << person.height
         << endl;

    return 0;
}
