// NAME: Atahar Hossain	 ID :2231877642
#include <iostream>
#include "quetype.cpp"
#include "stacktype.cpp"
using namespace std;
int main()
{

    QueType<int>  mq;
    QueType<int>  m;

    int n=0;
    int g;
    StackType<int>  p;

    mq.Enqueue(10);
    mq.Enqueue(20);
    mq.Enqueue(30);
    mq.Enqueue(40);
    mq.Enqueue(50);
    mq.Enqueue(60);
    mq.Enqueue(70);
    mq.Enqueue(80);

    if(n<=0){
        //print
        while(mq.IsEmpty()==false){
        mq.Dequeue(g);
        cout<< g <<" ";
        m.Enqueue(g);
        }
        while(m.IsEmpty()==false){
        m.Dequeue(g);
        mq.Enqueue(g);
        }

    }

    else{

        for(int i=0;i<n;i++){
            mq.Dequeue(g);
            p.Push(g);
        }

        //check pop
        cout<<p.Top()<<endl;

        //task
        while(p.IsEmpty()==false){
            m.Enqueue(p.Top());
            p.Pop();
        }
        cout<<endl;
        while(mq.IsEmpty()==false){
            mq.Dequeue(g);
            m.Enqueue(g);
        }

        while(m.IsEmpty()==false){
            m.Dequeue(g);
            mq.Enqueue(g);
        }

        //print
        while(mq.IsEmpty()==false){
            mq.Dequeue(g);
            cout<< g <<" ";
            m.Enqueue(g);
        }
        while(m.IsEmpty()==false){
            m.Dequeue(g);
            mq.Enqueue(g);
        }
    }
    return 0;
}
