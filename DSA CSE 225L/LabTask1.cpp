#include<iostream>
using namespace std;

int main(){

//Lab Task 1

int row;

cout<<"Enter an Integer row size"<<endl;
cin>>row;

int cols[row];

for(int i=0;i<row;i++){
        int sz=0;
    cout<<"Enter Column size (Integer) for row: "<<i+1<<endl;
    cin>>sz;
    cols[i]=sz;
}

cout<<"\n Creating Dynamic Memory......."<<endl;

int **ptr=new int*[row];

for(int j;j<row;j++){
    ptr[j]=new int[cols[j]];
}

for(int a=0;a<row;a++){
    for(int b=0;b<cols[a];b++){
        cout<<"Enter the element of: Row: "<<a<<" Column: "<<b<<endl;
        cin>>ptr[a][b];
    }
}

cout<<"\nYour Entered Values"<<endl;
for(int a=0;a<row;a++){
        cout<<"Row "<<a<<endl;
    for(int b=0;b<cols[a];b++){
            cout<<ptr[a][b]<<endl;
    }
    cout<<"\n"<<endl;
}

for(int a=0;a<row;a++){
        delete [] ptr [a];
}
delete [] ptr;

return 0;
}
