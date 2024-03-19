#include <iostream>
#include <list>
#include <algorithm> 

using namespace std;

int main() {
    list<int> unsortedList = {5, 2, 9, 1, 7}; 
    
   
    cout << "Unsorted list: ";
    for (const auto& elem : unsortedList) {
            cout << elem << " ";
    }
    cout<<endl;
    
    unsortedList.sort(); 
    
   cout << "Sorted list (ascending order): ";
    for (const auto& elem : unsortedList) {
        cout << elem << " ";
    }
    cout <<endl;
    
    list<int> anotherUnsortedList = {10, 6, 3, 8, 4};
    
    cout << "Another unsorted list: ";
    for (const auto& elem : anotherUnsortedList) {
        cout << elem << " ";
    }
    cout <<endl;
    
    anotherUnsortedList.sort(greater<int>()); 
    
    cout << "Sorted list (descending order): ";
    for (const auto& elem : anotherUnsortedList) {
       cout << elem << " ";
    }
    cout <<endl;
    
    return 0;
}
