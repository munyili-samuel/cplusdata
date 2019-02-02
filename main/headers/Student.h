//
// Created by Samuel Munyili on 2019-01-29.
//

#ifndef NAOLSOFT_STUDENT_H
#define NAOLSOFT_STUDENT_H

using namespace std;

class Student {

public:
    Student();

    Student(string, string, int, string, string, long);

    ~Student();

    void SitInClass();

    const string &getFirstName() const;

    void setFirstName(const string &firstName);

    const string &getLastName() const;

    void setLastName(const string &lastName);

    int getAge() const;

    void setAge(int age);

    const string &getAddress() const;

    void setAddress(const string &address);

    const string &getCity() const;

    void setCity(const string &city);

    long getPhone() const;

    void setPhone(long phone);

private:
    string firstName;
    string lastName;
    int age;
    string address;
    string city;
    long phone;
};

#endif //NAOLSOFT_STUDENT_H
