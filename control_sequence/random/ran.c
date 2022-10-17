#include<stdio.h>
#include<stdlib.h>
int rand(void);
void main()
{
   int arr[10];
   int n;
   printf("enter how many randm numbers you want:");
   scanf("%d",&n);
   for(int i=0;i<n;i++)
   {
     arr[i]=rand();
   }
   printf("/nrandom number for %d:",n);
   for(int i=0;i<n;i++)
   {
     printf("\t%d",arr[i]);
   }
   for(int i=0;i<n;i++)
    {
      if(arr[i]%2!=0)
       {
         printf("\nit is not prime\n");
       }
      else
          {
           printf("it is  prime");
          }
     }

}

