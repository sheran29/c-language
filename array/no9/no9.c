#include<stdio.h>
int main()
{
   int n,i,j,l,p;
   int arr[20];
   printf("enter the number of elements:");
   scanf("%d",&n);
   printf("enter the array element:");
   for(i=0;i<n;i++)
    {
      scanf("%d",&arr[i]);
    }
   printf("enter the number to be delete:");
   scanf("%d",&p);
  for(j=p-1;j<(n-1);j++)
   {
    arr[j]=arr[j+1];
   }
  printf("deleted array:");
  for(int l=0;l<n-1;l++)
  {
     printf("%d",arr[l]);
  }
return 0;
}
