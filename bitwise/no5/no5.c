#include<stdio.h>
int main()
{
   int num,n,newnum;
   printf("enter the number:");
   scanf("%d",&num);
   printf("\nenter the position:");
   scanf("%d",&n);
    newnum=(num&(~(1<<n)));
   printf("\nafter clearing a bit:%d",newnum);
   return 0;
}
