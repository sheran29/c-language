#include<stdio.h>
int main()
{
   int arr1[5]={1,2,3,4,5};
   int arr2[5]={6,7,8,9,10};
   int concat[10]={0};
   for(int i=0;i<10;i++)
    {
      concat[i]=arr1[i];
    }
   for(int i=0,j=5;(j<10)&&(i<5);i++,j++)
   {
     concat[j]=arr2[i];
    }
   printf("concatenate array:");
   for(int i=0;i<10;i++)
    {
     printf("\t%d",concat[i]);
    }
  return 0;
 }
