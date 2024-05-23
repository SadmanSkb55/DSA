#ifndef DYNARR_H_INCLUDED
#define DYNARR_H_INCLUDED

class dynArr {
private:
    int **data;
    int rows;
    int cols;
public:
    dynArr();
    dynArr(int r, int c);
    ~dynArr();

    void setValue(int row, int col, int value);
    int getValue(int row, int col);
    void allocate(int r, int c);
};

#endif // DYNARR_H_INCLUDED

