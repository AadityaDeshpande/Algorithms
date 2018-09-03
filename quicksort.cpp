#include<iostream>
using namespace std;
void quicksort(int a[],int l,int r);
int sort(int a[],int,int);
int main()
{
         int l,r,a[100];
         cout<<"Enter number of elements :";
         cin>>a[0];
         
         cout<<"Enter elements :"<<endl;
         for(int i=1;i<=a[0];i++)
         {
              cout<<"Enter element at location "<<i<<" :";
              cin>>a[i];
         }
         l=1;
         r=a[0];
        
         cout<<endl<<"Array before sorting is :"<<"|";
         for(int i=1;i<=a[0];i++)
         {
             cout<<a[i]<<" |";
          }
         cout<<endl;
                  cout<<"                         ";
          
         //Quicksort
         cout<<endl;
         quicksort(a,l,r);
     
         cout<<"Array after sorting is :";
         for(int i=1;i<=a[0];i++)
         {
             cout<<a[i]<<" , ";
          }
           cout<<endl;
           
           //cout<<l;
       
           return 0;
}
void quicksort(int a[],int l,int r)
{     
           int index;
        if(l<r)
        {
               index=sort(a,l,r);
               quicksort(a,l,index-1);
               quicksort(a,index+1,r);
         }
}
int sort(int a[],int l,int r)
{
               int pivot = a[l];
               int temp=0,j=r;
               int i=l+1;
               
               while(i<=j)
         {          
               while(a[i]<pivot)
               {
                    i++;
               }
               while(a[j]>pivot)
               {
                     j--;
               }
               if(i<j)
               {
                    temp=a[j];
                     a[j]=a[i];
                     a[i]=temp;
                }
                
          }
          	      a[l]=a[j];
                      a[j]=pivot;
                     return j;
}

