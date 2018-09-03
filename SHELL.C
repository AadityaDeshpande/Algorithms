//Shell sort is also called as diminishing sort.This is better than
//insertion and bubble sort.
//Algorithum
//1. This seperates original array x into sub arrays each containing
//   every k th element of the original array.
//2. k is called the incrementif k=3, every sub array contains third element
//   i.e. subarray 1 contains element of position0,3,6 and so on.
//   subarray 2 contains x[1],x[4]....
//3, The first k subarrays are sorted by simple insertion method.
//4. A new smaller value of k is chosen and the array is further partitioned
//   and sorted.
//5. Successively, k becomes 1. At this stage, there is only one array
//   containing all the elements, which is then sorted.
# include <stdio.h>
#include<iostream>
using namespace std;
//# include <conio.h>
# define max 20
int n;

void acceptdata(int x[],int n)
 {int i;
  for(i=0;i<n;i++)
    {printf("\nx[%d] : ",i+1);
     scanf("%d",&x[i]);
    }
  }

 void print(int x[],int n)
  {int i;
   printf("\n");
   for(i=0;i<n;i++)
     printf("%4d",x[i]);
   }

 void shellsort(int x[],int n,int increment[],int numinc)
  {int incr,j,k,span,y;
  
    for(incr=0;incr<numinc;incr++)
	 {
	  span=increment[incr];
             for(j=span;j<n;j++)
                {
                 y=x[j];
	           for(k=j-span;k>=0 && y<x[k]; k-=span)
	              {
	              x[k+span]=x[k];
	              }
	            x[k+span]=y;
	        }
     printf("\n");
     print(x,n);
     }
  }
  int main()
   {int x[max],increment[]={5,3,1};
   //clrscr();
   printf("Enter number of elements :");
   scanf("%d",&n);
   acceptdata(x,n);
   shellsort(x,n,increment,3);
   //getch();
   return 0;
   }
