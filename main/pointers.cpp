//
// Created by Samuel Munyili on 2019-01-29.
//

#include "headers/pointers.h"
#include <iostream>

using namespace std;

class Pointers {

public:
    void showName() {
        printf("My name is still Samuel Munyii.\n");
    }

public:
    int num = 10;
    int *pNum = &num;

public:
    void showDifference() {
        cout << "The number " << num << " is not equal to " << pNum
             << " but they are actually equal. Lol" << " although, they look the same as the dereference version "
             << *pNum << endl;

        // to make it more interesting, let us reassign the memory

        int x = 20;
        int *y = &x;

        // print to confirm
        cout << " x is " << x << " and y is " << y << endl;

        // now declare z and assign the value of x using the dereference
        int z = *y;

        cout << "The value os z is " << z << endl;

//        finally, reassign x using its pointer, let see if it changes
        *y = 30;
        cout << "Did it change? x is " << x << " and y is " << y << " and z is " << z << endl;

    }

public:
    bool handleReferences() {
        printf("references ---------------------------------\n");

        int x = 20;
        int &y = x;

        // print to confirm
        cout << " x is " << x << " and y is " << y << endl;

        // now let us change the value of x and see if the value oy automatically changes
        x = 100;
        cout << "After the change:\n x is " << x << " and y is " << y << endl;

        // what is we change y instead, will x change? Let's give it a shot

        y = 200;

        cout << "After the changing y, will x change?:\n x is " << x << " and y is " << y << endl;
////        cout << "Did it change? x is " << x << " and y is " << y << " and z is " << z << endl;

        return false;
    }


};
