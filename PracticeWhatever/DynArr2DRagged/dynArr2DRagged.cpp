#include <iostream>
#include "dynArr2DRagged.h"
using namespace std;

dynArr2DRagged::dynArr2DRagged() {
    data = nullptr;
    rows = 0;
    cols = nullptr;
}

dynArr2DRagged::dynArr2DRagged(int row) {
    rows = row;
    cols = new int[rows];
    data = new int*[rows];

    for (int i = 0; i < rows; ++i) {
        int sz;
        std::cout << "Enter column size for row " << i + 1 << ": ";
        std::cin >> sz;
        cols[i] = sz;
        data[i] = new int[cols[i]];
    }
}

dynArr2DRagged::~dynArr2DRagged() {
    if (data != nullptr) {
        for (int i = 0; i < rows; ++i) {
            delete[] data[i];
        }
        delete[] data;
    }
    delete[] cols;
}

int dynArr2DRagged::getValue(int row, int col) {
    return data[row][col];
}

void dynArr2DRagged::setValue(int row, int col, int value) {
    data[row][col] = value;
}

int dynArr2DRagged::getColumnSize(int row) {
    return cols[row];
}
