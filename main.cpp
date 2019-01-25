#include <iostream>

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

    auto *getStarted = new GetStarted();

    cout << "The sum is " << getStarted->getSum(20, 40.89808999) << endl;

    cout<<"Is greater ? " <<  getStarted->isGreater(100, 10.1) << endl;

    signed couter = 10;
    long long sam = 10;

    return 0;
}
