#include<iostream>
using namespace std;
int main()
{
      int n,a[100];
      cout<<"Enter number of elements to be entered :";
      cin>>n;
      
      for(int i=0;i<n;i++)
      {
               cout<<"Enter element at location "<<i+1<<" : ";
               cin>>a[i];
      }
      
      cout<<endl<<"Array before sorting is :";
      for(int i=0;i<n;i++)
      {
             cout<<a[i]<<" , ";
      }
      
      cout<<endl;
      //insertion sort
      int k=0,j;
      for(int i=1;i<n;i++)
      {
             j=i-1;
             k=a[i];
             while((j>=0) && (a[j]>k))
             {
                   a[j+1]=a[j];
                   j--;
             }
             a[j+1]=k;
       }
       
       cout<<"Array after insertion sorting is :";
       for(int i=0;i<n;i++)
       {
              cout<<a[i]<<" , ";
        }
        cout<<endl;
        return 0;
}
