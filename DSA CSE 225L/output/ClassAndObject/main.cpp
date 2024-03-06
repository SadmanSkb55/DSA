#include <iostream>
#include "box.h"

using namespace std;

int main()
{
    Box b1;
    Box b2(4,6,8);
    cout<<b1.getVolume<<endl;
    cout<<b2.getVolume<<endl;
    return 0;
}
