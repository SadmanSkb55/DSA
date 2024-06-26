#ifndef UNSORTEDTYPE_H_INCLUDED
#define UNSORTEDTYPE_H_INCLUDED
template <class ItemType>
class UnsortedType
{
    struct NodeType
    {
        ItemType info;
        NodeType* next;
    };
public:
    UnsortedType();
    ~UnsortedType();
    bool IsFull();
    int LengthIs();
    void MakeEmpty();
    void RetrieveItem(ItemType&, bool&);
    void InsertItem(ItemType);
    void DeleteItem(ItemType);
    void Print();
    void ResetList();
    void GetNextItem(ItemType&);
private:
    NodeType* head;
    int length;
    NodeType* currentPos;
};
#endif // UNSORTEDTYPE_H_INCLUDED
