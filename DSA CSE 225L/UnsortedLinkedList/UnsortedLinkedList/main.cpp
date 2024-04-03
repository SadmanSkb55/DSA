#include <iostream>
#include "unsortedtype.cpp"

using namespace std;

int main()
{
    UnsortedType<int> list1;
    list1.InsertItem(5);
    list1.InsertItem(7);
    list1.InsertItem(4);
    list1.InsertItem(2);
    list1.InsertItem(1);

    list1.Print();

    list1.DeleteItem(1);

    list1.Print();

    return 0;
}
