#include <iostream>
#include "dynArr.cpp"

using namespace std;

int main()
{

    dynArr<char> obj1(5);

    char value;
    for(int i=0;i<5;i++){
        cin>>value;
        obj1.setValue(i,value);
    }

    for(int i=0;i<5;i++){
       cout<<obj1.getValue(i)<<" ";
    }
    cout<<endl;

    obj1.~dynArr();

    for(int i=0;i<5;i++){
       cout<<obj1.getValue(i)<<" ";
    }
    cout<<endl;

    dynArr<int> obj2(3);

    int value2;
    for(int i=0;i<3;i++){
        cin>>value2;
        obj2.setValue(i,value2);
    }

    for(int i=0;i<3;i++){
       cout<<obj2.getValue(i)<<" ";
    }
    cout<<endl;

    obj1.~dynArr();

    for(int i=0;i<3;i++){
       cout<<obj2.getValue(i)<<" ";
    }
    cout<<endl;

    return 0;
}
