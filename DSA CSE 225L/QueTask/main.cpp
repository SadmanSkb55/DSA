#include <iostream>
#include "QueType.cpp"
using namespace std;

int main() {

    QueType<int> queue, cost;
    int size;
    cin >> size;

    int array[size];
    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }

    int target;
    cin >> target;

    for (int i = 0; i < size; i++) {             // Pushing the coin values into the queue
        queue.Enqueue(array[i]);
        cost.Enqueue(1);
    }

    int temp, count = 0;

    while (true) {                               // Looping until the target is reached
        queue.Dequeue(temp);
        cost.Dequeue(count);

        if (temp == target)
            break;
        else {
            count++;
            for (int i = 0; i < size; i++) {
                queue.Enqueue(temp + array[i]);
                cost.Enqueue(count);
            }
        }
    }
    cout << count << endl;

    return 0;
}
