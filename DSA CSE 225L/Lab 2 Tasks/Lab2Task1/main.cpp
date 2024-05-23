#include <iostream>
#include "dynArr.h"
using namespace std;

int main() {
    dynArr obj1;
    dynArr obj2(5);

    int value;
    cout << "Enter five values to store in the array of the second object:" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << "Value " << i + 1 << ": ";
        cin >> value;
        obj2.setValue(i, value);
    }

    cout << "Values stored in the array of the second object:" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << obj2.getValue(i) << " ";
    }
    cout << endl;

    return 0;
}
