
#include "dynArr.h"
#include <iostream>
using namespace std;

dynArr::dynArr() {
    data = nullptr;
    size = 0;
}

dynArr::dynArr(int s) {
    data = new int[s];
    size = s;
}

dynArr::~dynArr() {
    delete[] data;
}

void dynArr::setValue(int index, int value) {
    if (index >= 0 && index < size) {
        data[index] = value;
    }
}

int dynArr::getValue(int index) {
    if (index >= 0 && index < size) {
        return data[index];
    }
    return -1;
}
