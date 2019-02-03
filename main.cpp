#include <iostream>
#include <stdio.h>
#include <string>
#include "Headers/Person.h"
#include "Headers/Student.h"

using namespace std;

int main() {
    cout << "Old is gold. Here I go again!!!! Haha" << endl;

    Student *student = new Student("Esther", "Mutua", 21, "Unknown", 12345);

    student->OutputIdentity();
    student->OutputAge();

    return 0;
}
