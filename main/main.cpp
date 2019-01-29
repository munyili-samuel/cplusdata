#include <iostream>
#include "pointers.cpp"

using namespace std;


class GetStarted {

public:
    double getSum(double x, double y) {
        return x + y;
    }

public:
    bool isGreater(double x, double y) {
        return x > y;
    }

public:
    void loopAndCallName() {
        for(int x= 0; x<= 10; x++){
            cout << "Samuel, I have called you " << x << " times " << endl;
        }
    }

public:
    void whileLoopWithoutDo() {
        long long x = 0;
        printf("While Loop, Calling Samuel.....\n");
        while (x < 0){
            cout << "Samuel, I have called you " << x << " times " << endl;
            x ++;
        }
    }

public:
    void whileLoopWithDo() {
        long long x = 0;
        printf("Do While Loop, Calling Samuel.....\n");
        do{
            cout << "Samuel, I have called you " << x << " times " << endl;
            x ++;
        }
        while (x < 0);
    }

};

struct list_emelemt {
    struct list_element * next;
};

typedef struct list_element list_element;

typedef struct {
    list_element * first;
    list_element * last;
} list;




int main() {
    printf("Hello World!! I'm Samuel\n");

    int count = 2;
    int *pointer = &count;

    cout << "The pointer is " << *pointer << endl;

    GetStarted getStarted{};

    cout << "The sum is " << getStarted.getSum(20, 40.89808999) << endl;

    cout<<"Is greater ? " <<  getStarted.isGreater(100, 10.1) << endl;

    long myLong[] = {10, 15, 20};

    cout <<"My long is " << myLong[4] << endl;

    printf("Calling Samuel ........\n");
    getStarted.loopAndCallName();

    getStarted.whileLoopWithoutDo();

    getStarted.whileLoopWithDo();

    Pointers pointers{};

    pointers.showName();

    return 0;
}
