#include <iostream>
#include "dynarr2D.h"
using namespace std;
int main() {
    int rows,cols;
    cout<<"Enter Rows: "<<endl;
    cin>>rows;
    cout<<"Enter Cols: "<<endl;
    cin>>cols;

    dynArr2D arr(rows, cols);

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            int val;
            cout<<"Enter the Value of :"<<i<<" : "<<j<<endl;
            cin>>val;
            arr.setValue(i,j,val);
        }
    }

    std::cout << "2D Array:" << std::endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << arr.getValue(i, j) << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
