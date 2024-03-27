#ifndef DYNARR2DRAGGED_H_INCLUDED
#define DYNARR2DRAGGED_H_INCLUDED
#include "dynArr2DRagged.cpp"

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

#endif
