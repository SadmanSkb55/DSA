#include<iostream>

using namespace std;

int main()
{
   int row=3;
   int column=4;

   int **ptr=new int*[row];
   //ptr[0]=new int[column];
  // ptr[1]=new int[column];
  // ptr[2]=new int[column];
//samething but with loop
   for(int i=0;i<row;i++){
    ptr[i]=new int[column];
   }
for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
                int temp=0;
            cout<<"Enter value of: "<<i<<" "<<j<<endl;
            cin>>temp;
            ptr[i][j]=temp;
        }
   }
   cout<<"INserted Matrix"<<endl;
   for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
                int temp=0;
            cout<<"value of: "<<i<<" "<<j<<" is "<<ptr[i][j]<<endl;

        }
   }
   
   
   cout<<"Deallocating....."<<endl;
   for(int i=0;i<row;i++){
        delete [] ptr[i];
   }
   delete [] ptr;
   
   
   cout<<"Deallocated"<<endl;
   
   cout<<"After Deallocating:::::::"<<endl;
   for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
                int temp=0;
            cout<<"value of: "<<i<<" "<<j<<" is "<<ptr[i][j]<<endl;

        }
   }

   //for ragged,lets say user input


//    int rowr=0;
//     int colarr[];
//    cout<<"Enter row size"<<endl;
//    cin>>rowr;
//    for(int i=0;i<rowr;i++){
//        int columnr=0;
//        cout<<"Enter column size for row: "<<i+1<<endl;
//    cin>>columnr;
//    ptr[i]=new int[columnr];
//    }

// for(int i=0;i<rowr;i++){
//         for(int j=0;j<column;j++){
//                 int temp=0;
//             cout<<"Enter value of: "<<i<<" "<<j<<endl;
//             cin>>temp;
//             ptr[i][j]=temp;
//         }
//    }


}
