#include<iostream>
using namespace std;
void mergesort(int a[],int,int);
void merge(int a[],int,int,int);
int main()
{
           int a[100],n;
            cout<<"Enter number of elements :";
            cin>>n;
           
            
            
            cout<<"Enter numbers :"<<endl;
            for(int i=0;i<n;i++)
            {     
                  cout<<"Enter element number "<<i+1<<" :";
                  cin>>a[i];
            }
            
            cout<<"--------------------------------------------------------"<<endl;
            cout<<endl<<"Array before sorting is : ";
            
            for(int i=0;i<n;i++)
            {
                 cout<<a[i]<<" , ";
            }
           
            mergesort(a,0,n-1);

            cout<<endl<<"Array after sorting is : ";
            for(int i=0;i<n;i++)
            {
                  cout<<a[i]<<" , ";
             }
            
            cout<<endl<<"--------------------------------------------------------"<<endl; 
            cout<<endl;
            return 0;
}
void mergesort(int a[],int l,int r)
{
            int mid;
            if(l<r)
            {
                 mid=(l+r)/2;
                 mergesort(a,l,mid);
                 mergesort(a,mid+1,r);
                 cout<<"\n\n\t printing the value of mid :"<<mid<<" , \n\n"<<endl;
                 cout<<"\t printing the value of left :"<<l<<" , "<<endl;
                 cout<<"\t printing the value of right :"<<r<<" , \n"<<endl;
                 merge(a,l,r,mid);
             }
}
void merge(int a[],int l,int r,int mid)
{
            int k=0,i=l,j=mid+1;
            int c[100];
            while(i<=mid && j<=r)
            {
                    if(a[i]<a[j])
                    {
                          c[k]=a[i];
                           i++;
                           k++;
		     }
                     else
                     {
                          c[k]=a[j];
                          j++;
                          k++;
                      }
             }
             
             while(i<=mid)
            {
                   c[k]=a[i];
                   i++;
                   k++;
             }
              while(j<=r)
             {
                   c[k]=a[j];
                   j++;
                   k++;
              }

              i=0;
               while(i<k)
               {
                  a[l+i]=c[i];
                  i++;
                }
}
