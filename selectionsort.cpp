#include<iostream>
using namespace std;
int main()
{
     		int n,a[100];
     		
     		cout<<"Enter number of elements to be entered :";
     		cin>>n;
     		
     		for(int i=0;i<n;i++)
     		{
     		     cout<<"Enter element at location :";
     		     cin>>a[i];    
     		}
     		
     		cout<<"Elements before sorting are :";
     		for(int i=0;i<n;i++)
     		{
     		     cout<<a[i]<<" , ";
     		}
     		
     		cout<<endl;
     		//selection sort 
     		
     		int min,temp;
     		for(int i=0;i<(n-1);i++)
     		{
     		     min=a[i];
     		     temp=i;
     		      for(int j=(i+1);j<n;j++)
     		      {
     		           if(a[j]<min)
     		           {
     		             min=a[j];
     		             temp=j;
     		            }
     		       }
     		           a[temp]=a[i];
     		           a[i]=min;
     		           for(int i=0;i<n;i++)
     		        {
     		            cout<<a[i]<<" , ";
     		        } cout<<endl; 
     		 }
     		 
     		 cout<<"Elements after selection sorting are :";
     		 
     		 for(int i=0;i<n;i++)
     		 {
     		     cout<<a[i]<<" , ";
     		     //cout<<endl;
     		 }
     		 
                 cout<<endl;
                 return 0;
                 
}
