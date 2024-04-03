#include "unsortedtype.h"
#include <iostream>
using namespace std;

template <class ItemType>
UnsortedType<ItemType>::UnsortedType()
{
    length = 0;
    head = NULL;
    currentPos = NULL;
}

template <class ItemType>
int UnsortedType<ItemType>::LengthIs()
{
    return length;
}

template<class ItemType>
bool UnsortedType<ItemType>::IsFull()
{
    NodeType* location;
    try
    {
        location = new NodeType;
        delete location;
        return false;
    }
    catch(bad_alloc& exception)
    {
        return true;
    }
}

template <class ItemType>
void UnsortedType<ItemType>::InsertItem(ItemType item)
{
    NodeType* location;
    location = new NodeType;
    location->info = item;
    location->next = head;
    head = location;
    length++;
}

template <class ItemType>
void UnsortedType<ItemType>::DeleteItem(ItemType item)
{
    NodeType* location = head;
    NodeType* tempLocation;

    if (item == head->info)
    {
        tempLocation = location;
        head = head->next;
    }
    else
    {
        while (!(item==(location->next)->info))
            location = location->next;

        tempLocation = location->next;
        location->next = (location->next)->next;
    }

    delete tempLocation;
    length--;
}

template <class ItemType>
void UnsortedType<ItemType>::RetrieveItem(ItemType& item, bool& found)
{
    NodeType* location = head;
    found = false;
    while (location != NULL)
    {
        if (item == location->info)
        {
            found = true;
            break;
        }
        else
            location = location->next;
    }
}

template <class ItemType>
void UnsortedType<ItemType>::MakeEmpty()
{
    NodeType* tempPtr;
    while (head != NULL)
    {
        tempPtr = head;
        head = head->next;
        delete tempPtr;
    }
    length = 0;
}

template <class ItemType>
UnsortedType<ItemType>::~UnsortedType()
{
    MakeEmpty();
}

template <class ItemType>
void UnsortedType<ItemType>::Print()
{
    NodeType* tempPtr = head;
    while(tempPtr != NULL)
    {
        //cout << (*tempPtr).info << " ";
        cout << tempPtr->info << " ";
        tempPtr = tempPtr->next;
    }
    cout << endl;
}


template <class ItemType>
void UnsortedType<ItemType>::ResetList()
{
    currentPos = NULL;
}

template <class ItemType>
void UnsortedType<ItemType>::GetNextItem(ItemType&
        item)
{
    if (currentPos == NULL)
        currentPos = head;
    else
        currentPos = currentPos->next;
    item = currentPos->info;
}
