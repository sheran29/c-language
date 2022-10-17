#include<stdio.h>
int main()
{
   int a[10];
   int n,p,k;
  printf("enter the length of array:");
  scanf("%d",&n);
  printf("\nenter the array element:");
  for(int i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("\nenter the position and value to insert:");
  scanf("%d %d",&p,&k);
  for(int i=n;i>=p;i--)
   {
     a[i]=a[i-1];
   }
   a[p]=k;
 printf("\nInserted array:");
  for(int i=0;i<n+1;i++)
   {
    printf("%d",a[i]);
   }
return 0;
}
