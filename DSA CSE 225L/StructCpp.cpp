#include <iostream>
using namespace std;

struct student{
int id,phonenumber,age;
};

int main(){
student a[3];
    a[0].id=123;
    a[0].phonenumber=111;
    a[0].age=12;

    a[1].id=356;
    a[1].phonenumber=222;
    a[1].age=78;

    a[2].id=576;
    a[2].phonenumber=324;
    a[2].age=10;

    for(int i=0;i<3;i++){
        cout<<"ID: "<<a[i].id<<"Age: "<<a[i].age<<"Phone Number: "<<a[i].phonenumber<<endl;
         cout<<sizeof(a[i])<<endl;
    }
   
    cout<<"\n"<<endl;
    short int x;
    cout<<sizeof(x)<<endl;
return 0;
}
