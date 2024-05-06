#include <iostream>
#include "timestamp.h"
#include "sortedtype.cpp"

using namespace std;

int main()
{
    timestamp t1(15,34,23),t2(13,13,02),t3(43,45,12),t4(25,36,17),t5(52,02,20);

    t1.print();
    t2.print();
    t3.print();
    t4.print();
    t5.print();

    SortedType<timestamp> list1;

    list1.InsertItem(t1);
    list1.InsertItem(t2);
    list1.InsertItem(t3);
    list1.InsertItem(t4);
    list1.InsertItem(t5);

    list1.DeleteItem(t3);

    timestamp currentTime;
    for (int i = 0; i <list1.LengthIs(); ++i) {
        list1.GetNextItem(currentTime);
        currentTime.print();
    }

}
