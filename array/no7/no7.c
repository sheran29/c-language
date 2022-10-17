 
#include<stdio.h>
int main()
{
  int arr[5]={0};
  int same[5]={0};
  int rev[5]={0};
  int i;
 printf("enter 5 array value:");
 for (i=0;i<5;i++)
  {
    scanf("%d",&arr[i]);
  }
  printf("\nsame array:");
 for(i=0;i<5;i++)
  {
   same[i]=arr[i];
   printf("%d",same[i]);
  }
 printf("\nreversed array:");
 for(i=(5-1);i>=0;i--)
  {
   rev[i]=arr[i];
  printf("%d",rev[i]);
  }
return 0;
}
