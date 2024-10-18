#include <iostream>
using namespace std;
int main()
{

  //patter#1

    int n=5;
    // for(int i=0;i<n;i++){
    //   for(int j=0;j<=i;j++){
    //  cout<<"* ";
    //   }
    //   cout<<endl;
    // }

    //patter#2

    // 
    // for(int i=0;i<n;i++){
    //   for(int j=0;j<i+1;j++){
    //     cout<<(i+1);

    //   }
    //   cout<<endl;
    // }

    //patter#3

    //     
    //    char ch='A';
    // for(int i=0;i<n;i++){
       
    //   for(int j=0;j<i+1;j++){
    //     cout<<ch<<"";

    //   }
    //   cout<<endl;
    //   ch++;
    // }

    //patter#4

    for(int i=0;i<n;i++){
      for(int j=1;j<i+1;j++){
        cout<<j;
      }
      cout<<endl;
    }
}