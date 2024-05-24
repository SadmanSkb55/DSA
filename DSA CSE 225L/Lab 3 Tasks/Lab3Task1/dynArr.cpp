#include "dynArr.h"
#include <iostream>
using namespace std;

template <typename T>
dynArr<T>::dynArr(int s) {
    data = new T[s];
    size = s;
}

template <typename T>
dynArr<T>::~dynArr() {
    delete[] data;
}

template <typename T>
void dynArr<T>::setValue(int index, T value) {
    if (index >= 0 && index < size) {
        data[index] = value;
    }
}

template <typename T>
T dynArr<T>::getValue(int index) {
    if (index >= 0 && index < size) {
        return data[index];
    }
    return T();  // return default value of T if index is out of bounds
}

