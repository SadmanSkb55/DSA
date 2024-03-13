#include <iostream>
using namespace std;

int main(){

    char row=3,column=4;

    char **ptr=new char*[row];

    for (int i = 0; i < row; i++)
    {
        ptr[i]=new char[column];
    }

    for (int i = 0; i < row; i++)
    {
        cout<<"Row "<<i<<"\t"<<endl;
        for (int j = 0; j < column; j++)
        {
            cout<<"Enter element ["<<i+1<<"]["<<j+1<<"]";
           // cin>>ptr[i][j];
           cin>>*(*(ptr+i)+j) ;
        }
        cout<<endl;
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            //cout<<ptr[i][j]<<"\t";
            cout << *(*(ptr+i)+j)<<"\t" ;
        }
        cout<<endl;
    }
    
    

     return 0;
}