#include<stdio.h>
int large(int *a,int n,int j);
int main()
{
  int a[10];
  int i,j,n;
  printf("enter the size of array:");
  scanf("%d",&n);
  printf("enter the array element:");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
//  n=sizeof(a);
  j=a[0];
  j=large(a,n-1,j);
  printf("the largest is:%d",j);
 return 0;
}


int large(int *a,int n,int j)
 {
   if(n==0)
     {
       return  j;
     }
   else
    if(a[n]>j)
     {
       j=a[n];
      }
    return large(a,n-1,j);
  }
