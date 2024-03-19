#include <iostream>
#include <list>
#include <algorithm>

using namespace std;
int main() {
    list<int> mylist = {5, 2, 9, 1, 7}; 
    
    
    mylist.sort(); 
     cout << "Sorted list: ";
    for (const auto& elem : mylist) {
       cout << elem << " ";
    }
    cout<<endl;
    
    return 0;
}