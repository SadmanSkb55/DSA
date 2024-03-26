#include <iostream>
#include "dynArr2DRagged.h"
using namespace std;

int main() {
    int row;

   cout << "Enter the number of rows: ";
   cin >> row;

    dynArr2DRagged arr(row);

    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < arr.getColumnSize(i); ++j) {
            int value;
            cout << "Enter value for element [" << i << "][" << j << "]: ";
            cin >> value;
            arr.setValue(i, j, value);
        }
    }

    cout << "Ragged 2D Array:" <<endl;
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < arr.getColumnSize(i); ++j) {
           cout << arr.getValue(i, j) << " ";
        }
        cout <<endl;
    }

    return 0;
}
