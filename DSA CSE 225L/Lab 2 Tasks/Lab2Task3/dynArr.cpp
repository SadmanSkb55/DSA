#include "dynArr.h"
#include <iostream>
using namespace std;

dynArr::dynArr() {
    data = nullptr;
    rows = 0;
    cols = 0;
}

dynArr::dynArr(int r, int c) {
    rows = r;
    cols = c;
    data = new int*[rows];
    for (int i = 0; i < rows; ++i) {
        data[i] = new int[cols];
    }
}

dynArr::~dynArr() {
    if (data != nullptr) {
        for (int i = 0; i < rows; ++i) {
            delete[] data[i];
        }
        delete[] data;
    }
}

void dynArr::setValue(int row, int col, int value) {
    if (row >= 0 && row < rows && col >= 0 && col < cols) {
        data[row][col] = value;
    }
}

int dynArr::getValue(int row, int col) {
    if (row >= 0 && row < rows && col >= 0 && col < cols) {
        return data[row][col];
    }
    return -1;
}

void dynArr::allocate(int r, int c) {
    if (data != nullptr) {
        for (int i = 0; i < rows; ++i) {
            delete[] data[i];
        }
        delete[] data;
    }
    rows = r;
    cols = c;
    data = new int*[rows];
    for (int i = 0; i < rows; ++i) {
        data[i] = new int[cols];
    }
}

