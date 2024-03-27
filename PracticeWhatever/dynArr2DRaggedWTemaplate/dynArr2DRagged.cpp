#include <iostream>

using namespace std;

template<typename T>
class dynArr2DRagged {
private:
    T **data;
    int rows;
    int *cols;

public:
    dynArr2DRagged();
    dynArr2DRagged(int);
    ~dynArr2DRagged();
    void setValue(int, int, T);
    T getValue(int, int);
    int getColumnSize(int);
};

template<typename T>
dynArr2DRagged<T>::dynArr2DRagged() {
    data = nullptr;
    rows = 0;
    cols = nullptr;
}

template<typename T>
dynArr2DRagged<T>::dynArr2DRagged(int row) {
    rows = row;
    cols = new int[rows];
    data = new T*[rows];
    for (int i = 0; i < rows; ++i) {
        int sz;
        cout << "Enter column size for row " << i + 1 << ": ";
        cin >> sz;
        cols[i] = sz;
        data[i] = new T[cols[i]];
    }
}

template<typename T>
dynArr2DRagged<T>::~dynArr2DRagged() {
    if (data != nullptr) {
        for (int i = 0; i < rows; ++i) {
            delete[] data[i];
        }
        delete[] data;
    }
    delete[] cols;
}

template<typename T>
T dynArr2DRagged<T>::getValue(int row, int col) {
    return data[row][col];
}

template<typename T>
void dynArr2DRagged<T>::setValue(int row, int col, T value) {
    data[row][col] = value;
}

template<typename T>
int dynArr2DRagged<T>::getColumnSize(int row) {
    return cols[row];
}

