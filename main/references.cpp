//
// Created by Samuel Munyili on 2019-01-29.
//

#include "references.h"
#include "stdio.h"
#include <iostream>

using namespace std;

class References {
private:
    int num;


public:
    int getNum() const {
        return num;
    }

    void setNum(int num) {
        References::num = num;
    }

    void changeNumber(int num) {
        num = num * num;
        cout << "In References:: changeNumber The ref number is " << num << endl;
    }

    void changeNumberRef(int &refNum) {
        refNum = refNum * refNum;
        cout << "In References:: changeNumberRef The number is " << refNum << endl;
    }

};

