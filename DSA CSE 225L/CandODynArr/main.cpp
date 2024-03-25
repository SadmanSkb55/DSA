#include <iostream>
#include "dynarr.h"

using namespace std;

int main() {

    int size;
    cout<<"Enter the Size: "<<endl;
    cin>>size;

    dynArr arr(size);


    for(int x=0;x<size;x++){
        int val;
        cout<<"Enter the value of index: "<<x<<endl;
        cin>>val;
        arr.setValue(x,val);
    }


    for (int i = 0; i < size; ++i) {
        std::cout << "Value at index " << i << ": " << arr.getValue(i) << std::endl;
    }

    return 0;
}
