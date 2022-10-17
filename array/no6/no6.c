#include<stdio.h>
int main()
{
   int i,n;
   int arr[n];
  printf("enter how many number:\n");
   scanf("%d",&n);
   printf("enter  number array:\n");
   for(i=0;i<n;i++)
  {
   scanf("%d",&arr[i]);
  }
  // int large=arr[0];
  for(i=0;i<=n;i++)
    {
     for(int j=i+1;j<n;j++)
     {
       if(arr[i]<arr[j])
        {
          int a=arr[i];
          arr[i]=arr[j];
          arr[j]=a;
        }
      }
   }
  printf("sort lister ARRAY:\n");
   for(int i=0;i<n;i++)
     {
       printf("\t%d",arr[i]);
     }
   printf("\nlargest number %d\n",arr[0]);
   printf("second largest %d\n",arr[1]);
   printf("second smallest %d\n",arr[n-2]);
   printf("\nsmallest value is:%d",arr[n-1]);
   return 0;
 }
