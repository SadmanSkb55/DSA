#ifndef DYNARR2DRAGGED_H_INCLUDED
#define DYNARR2DRAGGED_H_INCLUDED

class dynArr2DRagged {
private:
    int **data;
    int rows;
    int *cols;
public:
    dynArr2DRagged();
    dynArr2DRagged(int);
    ~dynArr2DRagged();
    void setValue(int, int, int);
    int getValue(int, int);
    int getColumnSize(int);
};

#endif // DYNARR2DRAGGED_H_INCLUDED
