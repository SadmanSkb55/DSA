#include <iostream>
using namespace std;

int main() {

  int*ptr=new int[3];

  *ptr=10;
  *(ptr+1)=50;
  *(ptr+2)=100;

  cout<<ptr[2]<<endl;
    cout<<"\n"<<endl;
  int*tempptr=new int[5];
  for(int i=0;i<sizeof(tempptr);i++){
    tempptr[i]=ptr[i];

  }

  delete[]ptr;
  ptr=tempptr;
  tempptr=NULL;

  *(ptr+4)=560;
  *(ptr+5)=678;
  cout<<ptr[4]<<endl;
    cout<<"\n"<<endl;
     delete[]ptr;

  //for(int i=0;i<sizeof(ptr);i++){
 //   cout<<ptr[i]<<endl;
 //}

  return 0;
}