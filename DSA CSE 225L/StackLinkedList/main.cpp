#include <iostream>
#include "stacktype.cpp"

using namespace std;

int main()
{
    StackType<int> s;
    s.Push(5);
     s.Push(7);
      s.Push(4);
       s.Push(2);
        s.Push(1);

   // cout << s.Top() << endl;
     //cout << s.Top() << endl;
      //cout << s.Top() << endl;

       StackType<int> tempstack;

       while(s.IsEmpty()!=true){
        cout<<s.Top()<<endl;//1
        tempstack.Push(s.Top());//1
        s.Pop();//deleted
       }

       cout<<endl;
       if(s.IsEmpty())
        cout<<"stack is empty"<<endl;
       else
         cout<<"stack is not empty"<<endl;
       cout<<"Restaking"<<endl;

       while(tempstack.IsEmpty()!=true){
        s.Push(tempstack.Top());
        tempstack.Pop();
       }



       cout<<endl;
       if(s.IsEmpty())
        cout<<"stack is empty"<<endl;
       else
         cout<<"stack is not empty"<<endl;

    return 0;
}
