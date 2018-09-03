#include<iostream>
using namespace std;
 
int main()
  {
    int arr[10],key,no,i=0;
       cout<<"Any 5 numbers"<<endl;
        for(i=0;i<5;i++)
           cin>>arr[i];
    
     cout<<"Enter the number that you want to search"<<endl;
      cin>>key;
 i=0;
      while(arr[i++]!=key&&i<5);
         // cout<<i;
           if(i>=5)
              cout<<"no is not present"<<endl;
            else
              cout<<"key is present at "<<i<<endl;

return 0;
} 
