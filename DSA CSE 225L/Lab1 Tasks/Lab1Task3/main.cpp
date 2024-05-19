#include <iostream>
using namespace std;

int main() {
    int rows;

    cout << "Enter the number of rows: ";
    cin >> rows;

    int** arr = new int*[rows];

    int* cols = new int[rows];
    for (int i = 0; i < rows; ++i) {
        cout << "Enter the number of columns for row " << i + 1 << ": ";
        cin >> cols[i];
        arr[i] = new int[cols[i]];
    }

    for (int i = 0; i < rows; ++i) {
        cout << "Enter " << cols[i] << " values for row " << i + 1 << ": ";
        for (int j = 0; j < cols[i]; ++j) {
            cin >> arr[i][j];
        }
    }

    cout << "The values in the array are:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols[i]; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < rows; ++i) {
        delete[] arr[i];
    }
    delete[] arr;
    delete[] cols;

    return 0;
}
