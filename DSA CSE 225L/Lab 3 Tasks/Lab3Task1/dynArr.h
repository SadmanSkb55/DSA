
#ifndef DYNARR_H_INCLUDED
#define DYNARR_H_INCLUDED

template <typename T>
class dynArr {
private:
    T *data;
    int size;
public:
    dynArr(int s);
    ~dynArr();

    void setValue(int index, T value);
    T getValue(int index);
};

#endif // DYNARR_H_INCLUDED
