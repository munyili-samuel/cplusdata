//
// Created by Samuel Munyili on 2019-01-29.
//

#ifndef NAOLSOFT_TEACHER_H
#define NAOLSOFT_TEACHER_H

using namespace std;

class Teacher {

public:
    Teacher();

    Teacher(string, string, int, string, string, long);

    ~Teacher();

    void GradeStudent();
    void SitInClass();

    const string &getLastName() const;

    void setLastName(const string &lastName);

private:
    string firstName;
    string lastName;
    int age;
    string address;
    string city;
    long phone;
};

#endif //NAOLSOFT_TEACHER_H
