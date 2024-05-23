#include <iostream>
#include "dynArr.h"
using namespace std;

int main() {
    int rows, cols;

    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    dynArr arr(rows, cols);

    cout << "Enter the values for the array:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            int value;
            cin >> value;
            arr.setValue(i, j, value);
        }
    }

    cout << "The values in the array are:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << arr.getValue(i, j) << " ";
        }
        cout << endl;
    }

    return 0;
}
