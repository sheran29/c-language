#include<stdio.h>
int large(int list.int n,int j);
int main()
{
  int a[10];
  int i,j,n;
  printf("enter the size of array:");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  n=sizeof(a);
  j=a[0];
  j=large(a,n,j);
  printf("the largest is:%d",j);
 return 0;
}


int large(int list,int n,int j)
 {
   if(n==0)
     {
       return  j;
     }
   else
    if(list[n]>j)
     {
       j=list[n];
      }
    return large(list,n-1,j);
  }
