#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    char** arr = new char*[rows];
    for (int i = 0; i < rows; ++i) {
        arr[i] = new char[cols + 1];
    }

    cout << "Enter " << rows << " strings, each up to " << cols << " characters long:" << endl;
    for (int i = 0; i < rows; ++i) {
        cout << "Enter string for row " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "The entered strings are:" << endl;
    for (int i = 0; i < rows; ++i) {
        cout << arr[i] << endl;
    }

    for (int i = 0; i < rows; ++i) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}
