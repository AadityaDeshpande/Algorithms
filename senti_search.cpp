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

      arr[5]=key;
     
   i=0;
     while(arr[i++]!=key);
           if(i<6) //5+1
             { cout<<"Key is present at  "<<i<<" "<<endl;
             // cout<<arr[i];
              }
           else
               cout<<"Key is not present"<<endl;
        
 //          i++;
                 
    return 0;
}    
	     
    
