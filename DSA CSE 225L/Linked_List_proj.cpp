#include <iostream>
using namespace std;

#define N 50

struct student {
    int id;
    struct student* next;
    struct student* prev;
};

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

void finder(int key) {
    struct student* temp = head;
    while (temp != nullptr) {
        if (temp->id == key) {
            cout << "ID " << key << " found in the linked list." << endl;
            return;
        }
        temp = temp->next;
    }
    cout << "ID " << key << " not found in the linked list." << endl;
}

void findandReplace(int key, int newID) {
    struct student* temp = head;
    while (temp != nullptr) {
        if (temp->id == key) {
            temp->id = newID;
            cout << "ID " << key << " replaced with " << newID << "." << endl;
            return;
        }
        temp = temp->next;
    }
    cout << "ID " << key << " not found in the linked list." << endl;
}

void insertNewId(int index, int id) {
    struct student* newNode = new student;
    newNode->id = id;
    newNode->next = nullptr;
    newNode->prev = nullptr;

    if (index == 0) {
        newNode->next = head;
        if (head != nullptr)
            head->prev = newNode;
        head = newNode;
        cout << "ID " << id << " inserted at the beginning." << endl;
        return;
    }

    struct student* temp = head;
    for (int i = 0; i < index - 1 && temp != nullptr; i++) {
        temp = temp->next;
    }

    if (temp == nullptr) {
        cout << "Index out of range." << endl;
        return;
    }

    newNode->next = temp->next;
    if (temp->next != nullptr)
        temp->next->prev = newNode;
    temp->next = newNode;
    newNode->prev = temp;
    cout << "ID " << id << " inserted at index " << index << "." << endl;
}

void insertnewIDAfter(int key, int id) {
    struct student* temp = head;
    while (temp != nullptr) {
        if (temp->id == key) {
            struct student* newNode = new student;
            newNode->id = id;
            newNode->next = temp->next;
            newNode->prev = temp;
            if (temp->next != nullptr)
                temp->next->prev = newNode;
            temp->next = newNode;
            cout << "ID " << id << " inserted after ID " << key << "." << endl;
            return;
        }
        temp = temp->next;
    }
    cout << "ID " << key << " not found in the linked list." << endl;
}

void deleter(int key) {
    if (head == nullptr) {
        cout << "Linked list is empty." << endl;
        return;
    }

    if (head->id == key) {
        struct student* temp = head;
        head = head->next;
        if (head != nullptr)
            head->prev = nullptr;
        delete temp;
        cout << "ID " << key << " deleted." << endl;
        return;
    }

    struct student* temp = head;
    while (temp->next != nullptr) {
        if (temp->next->id == key) {
            struct student* toDelete = temp->next;
            temp->next = temp->next->next;
            if (temp->next != nullptr)
                temp->next->prev = temp;
            delete toDelete;
            cout << "ID " << key << " deleted." << endl;
            return;
        }
        temp = temp->next;
    }
    cout << "ID " << key << " not found in the linked list." << endl;
}

void deleteFromToMultipleIndex(int start, int end) {
    if (start < 0 || end < start) {
        cout << "Invalid range." << endl;
        return;
    }

    struct student* temp = head;
    for (int i = 0; i < start - 1 && temp != nullptr; i++) {
        temp = temp->next;
    }

    if (temp == nullptr || temp->next == nullptr) {
        cout << "Invalid range." << endl;
        return;
    }

    struct student* startNode = temp;
    for (int i = start; i <= end && temp != nullptr; i++) {
        struct student* toDelete = temp->next;
        temp->next = temp->next->next;
        if (temp->next != nullptr)
            temp->next->prev = temp;
        delete toDelete;
        temp = temp->next;
    }

    cout << "Deleted IDs from " << start << " to " << end << "." << endl;
}

void deleteList() {
    struct student* temp = head;
    while (head != nullptr) {
        head = head->next;
        delete temp;
        temp = head;
    }
    cout << "Linked list deleted." << endl;
}

int main() {
    input();

    cout << "Linked List IDs:" << endl;
    struct student* temp = head;
    while (temp != nullptr) {
        cout << temp->id << " ";
        temp = temp->next;
    }
    cout << endl;

    int cond;
    cout << "1. Find 2. Find and Replace 3. Insert New ID 4. Insert New ID After 5. Delete ID 6. Delete from to Multiple Index 7. Delete List" << endl;
    cin >> cond;

    switch (cond) {
        case 1: {
            int key;
            cout << "Enter ID to find: ";
            cin >> key;
            finder(key);
            break;
        }
        case 2: {
            int key, newID;
            cout << "Enter ID to find: ";
            cin >> key;
            cout << "Enter new ID: ";
            cin >> newID;
            findandReplace(key, newID);
            break;
        }
        case 3: {
            int index, id;
            cout << "Enter index to insert at: ";
            cin >> index;
            cout << "Enter ID to insert: ";
            cin >> id;
            insertNewId(index, id);
            break;
        }
        case 4: {
            int key, id;
            cout << "Enter ID to insert after: ";
            cin >> key;
            cout << "Enter new ID: ";
            cin >> id;
            insertnewIDAfter(key, id);
            break;
        }
        case 5: {
            int key;
            cout << "Enter ID to delete: ";
            cin >> key;
            deleter(key);
            break;
        }
        case 6: {
            int start, end;
            cout << "Enter start index: ";
            cin >> start;
            cout << "Enter end index: ";
            cin >> end;
            deleteFromToMultipleIndex(start, end);
            break;
        }
        case 7: {
            deleteList();
            break;
        }
        default:
            cout << "Invalid choice." << endl;
            break;
    }

    return 0;
}
