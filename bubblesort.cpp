/*
 -------This is C++ program for bubble sort--------------------------
*/
#include<iostream>
using namespace std;
int main()
{
           int n,a[100],temp;
           cout<<"Enter number of elements :";
           cin>>n;
        
           for(int i=0;i<n;i++)
           {
              cout<<"Enter element at location "<<i+1<<" :";
              cin>>a[i];
           }
           
           cout<<"------------------------------------------------------";
           cout<<endl<<"Array before sorting is :";
           
           for(int i=0;i<n;i++)
           {
                   cout<<a[i]<<" , ";
           }
           
           //Bubble sort
             
           for(int j=n;j>0;j--)
           {
                for(int i=0;i<j-1;i++)
                 {
                         if(a[i+1]<a[i])
                          {
                                   temp=a[i];
				   a[i]=a[i+1];
                                   a[i+1]=temp;
                                   
                           }
                   }
                   //showing the passes
                     for(int i=0;i<n;i++)
              {
                    cout<<a[i]<<" , ";
              }cout<<endl;
                   
            }cout<<endl;
            
            cout<<endl<<"Array after sorting is :";
            
            for(int i=0;i<n;i++)
            {
                    cout<<a[i]<<" , ";
            }
            cout<<endl<<"------------------------------------------------------";           
            cout<<endl<<endl;
            return 0;
}
                 
