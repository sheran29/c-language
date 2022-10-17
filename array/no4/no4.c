#include<stdio.h>
int  main()
{
  int arr[5];
  int i,j;
  int rev[5]={0};
  printf("enter 5 number array:");
  for(i=0;i<5;i++)
   {
     scanf("%d",&arr[i]);
   }
 printf("\nentered number:");
  for(int k=0;k<5;k++)
   {
    printf("%d",arr[k]);
   }
 printf("\nreversed number:");
   for(j=(5-1);j>=0;j--)
  {
    printf("%d",arr[j]);
  }
return 0;
}
