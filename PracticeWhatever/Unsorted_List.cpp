#include <iostream>
#include <list>

using namespace std;
int main() {
    list<int> mylist = {5, 2, 9, 1, 7}; 
    
    cout <<"Unsorted list: ";
    for (const auto& elem : mylist) {
        cout << elem << " ";
    }
    cout <<endl;
    
    return 0;
}
