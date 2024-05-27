#include <iostream>
#include "quetype.cpp"


using namespace std;

int main()
{
    QueType<int> que;

    que.Enqueue(5);
    que.Enqueue(7);
    que.Enqueue(4);
    que.Enqueue(2);
    que.Enqueue(1);

    if(que.IsEmpty()){
        cout<<"Queue is empty"<<endl;
    }
    else
         cout<<"Queue is not empty"<<endl;

    QueType<int> tempQue;
    int temp;
    while(que.IsEmpty()==false){
        que.Dequeue(temp);
        cout<<temp<<" ";
        tempQue.Enqueue(temp);
    }
    cout<<endl;
    while(tempQue.IsEmpty()==false){
        tempQue.Dequeue(temp);
        que.Enqueue(temp);
    }
    if(tempQue.IsEmpty()){
        cout<<"Queue is empty"<<endl;
    }
    else
         cout<<"Queue is not empty"<<endl;

    return 0;
}
