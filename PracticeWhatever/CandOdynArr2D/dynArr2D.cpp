#include "dynarr2D.h"

dynArr2D::dynArr2D() {
    data = nullptr;
    rows = 0;
    cols = 0;
}

dynArr2D::dynArr2D(int r, int c) {
    rows = r;
    cols = c;
    data = new int*[rows];
    for (int i = 0; i < rows; ++i) {
        data[i] = new int[cols];
    }
}

dynArr2D::~dynArr2D() {
    if (data != nullptr) {
        for (int i = 0; i < rows; ++i) {
            delete[] data[i];
        }
        delete[] data;
    }
}

int dynArr2D::getValue(int row, int col) {
    return data[row][col];
}

void dynArr2D::setValue(int row, int col, int value) {
    data[row][col] = value;
}

