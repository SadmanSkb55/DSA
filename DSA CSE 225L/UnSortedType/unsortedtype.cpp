#include "unsortedtype.h"
#include <iostream>

using namespace std;

template <class ItemType>
UnsortedType<ItemType>::UnsortedType() {
    length = 0;
    listData = NULL;
    currentPos = NULL;
}

template <class ItemType>
int UnsortedType<ItemType>::LengthIs() {
    return length;
}

template<class ItemType>
bool UnsortedType<ItemType>::IsFull() {
    NodeType* location;
    try {
        location = new NodeType;
        delete location;
        return false;
    }
    catch(bad_alloc& exception) {
        return true;
    }
}

template <class ItemType>
void UnsortedType<ItemType>::InsertItemAtEnd(ItemType item) {
    NodeType* location = listData;
    NodeType* newNode = new NodeType;
    newNode->info = item;
    newNode->next = NULL;

    if (listData == NULL) {
        listData = newNode;
    } else {
        while (location->next != NULL) {
            location = location->next;
        }
        location->next = newNode;
    }
    length++;
}

template <class ItemType>
void UnsortedType<ItemType>::DeleteItem(ItemType item) {
    NodeType* location = listData;
    NodeType* tempLocation;
    if (item == listData->info) {
        tempLocation = location;
        listData = listData->next;
    } else {
        while (!(item == (location->next)->info)) {
            location = location->next;
        }
        tempLocation = location->next;
        location->next = (location->next)->next;
    }
    delete tempLocation;
    length--;
}

template <class ItemType>
void UnsortedType<ItemType>::RetrieveItem(ItemType& item, bool& found) {
    NodeType* location = listData;
    bool moreToSearch = (location != NULL);
    found = false;
    while (moreToSearch && !found) {
        if (item == location->info)
            found = true;
        else {
            location = location->next;
            moreToSearch = (location != NULL);
        }
    }
}

template <class ItemType>
void UnsortedType<ItemType>::MakeEmpty() {
    NodeType* tempPtr;
    while (listData != NULL) {
        tempPtr = listData;
        listData = listData->next;
        delete tempPtr;
    }
    length = 0;
}

template <class ItemType>
UnsortedType<ItemType>::~UnsortedType() {
    MakeEmpty();
}

template <class ItemType>
void UnsortedType<ItemType>::ResetList() {
    currentPos = NULL;
}

template <class ItemType>
void UnsortedType<ItemType>::GetNextItem(ItemType& item) {
    if (currentPos == NULL)
        currentPos = listData;
    else
        currentPos = currentPos->next;
    if (currentPos != NULL) // Added check to ensure currentPos is not NULL
        item = currentPos->info;
}

// Explicit instantiation of template classes
template class UnsortedType<int>;
