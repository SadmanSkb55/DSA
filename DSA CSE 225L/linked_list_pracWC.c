#include <stdio.h>
#include <stdlib.h>
#define N 50


struct student{
    int id;
    struct student*next;
    struct student*prev;
};

struct student lis [N];
struct student*head=NULL;

void insert(int id){
struct student*newN=(struct student*)malloc(sizeof(struct student));
newN->id=id;
newN->next=NULL;
newN->prev=NULL;
if(head==NULL){
    head=newN;
    return;
}
struct student*temp=head;
while(temp->next!=NULL){
    temp=temp->next;
    temp->next=newN;
    newN->prev=temp;
}
}

void input(){
    for(int i=0;i<N;i++){
            int id;
        printf("Enter Id %d  (If enter 0 it will stop)",i+1);
        scanf("%d",&id);
        if(id==0){
            break;
        }
    insert(id);
    }
}
void printList() {
    struct student* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->id);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    input();
    printf("Linked List IDs: ");
    printList();
    return 0;
}
