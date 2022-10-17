#include<stdio.h>
int main()
{
   int num,n,newnum;
   printf("enter the number:\n");
   scanf("%d",&num);
   printf("enter the postion to be set:");
   scanf("%d",&n);
   newnum=(1<<n)|num;
   printf("\nafter setting a bit:%d",newnum);
   return 0;
}
