#include <iostream>
using namespace std;

#define N 50

struct student {
    int id;
    struct student* next;
    struct student* prev;
};

struct student lis[N];
struct student* head = nullptr;

void insert(int id) {
    struct student* newN = new student;
    newN->id = id;
    newN->next = nullptr;
    newN->prev = nullptr;

    if (head == nullptr) {
        head = newN;
        return;
    }

    struct student* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = newN;
    newN->prev = temp;
}

void input() {
    for (int i = 0; i < N; i++) {
        int id;
        cout << "Enter Id " << i + 1 << " (If enter 0 it will stop): ";
        cin >> id;
        if (id == 0) {
            break;
        }
        insert(id);
    }
}

int main() {
    input();
    return 0;
}
