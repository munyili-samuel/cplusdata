#include <iostream>
#include "pointers.cpp"
#include "references.cpp"

using namespace std;


int main() {

    Pointers pointers{};

    pointers.showName();

    pointers.showDifference();

    pointers.handleReferences();


    cout << "\n\n\n\n" << endl;
    References references{};
    int initialNum = 10;
    references.changeNumber(initialNum);
    cout << "In the main, the initial number is now " << initialNum << endl;

    references.changeNumberRef(initialNum);
    cout << "In the main, the initial number after referencing is now " << initialNum << endl;

    return 0;
}
