#include <iostream>
#include "dynArr.cpp"
using namespace std;

int main() {
    int size = 5;
    dynArr<int> arr(size);

    cout << "Enter " << size << " integer values:" << endl;
    for (int i = 0; i < size; ++i) {
        int value;
        cin >> value;
        arr.setValue(i, value);
    }

    cout << "The integer values in the array are:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << arr.getValue(i) << " ";
    }
    cout << endl;

    dynArr<double> doubleArr(size);

    cout << "Enter " << size << " double values:" << endl;
    for (int i = 0; i < size; ++i) {
        double value;
        cin >> value;
        doubleArr.setValue(i, value);
    }

    cout << "The double values in the array are:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << doubleArr.getValue(i) << " ";
    }
    cout << endl;

    return 0;
}
