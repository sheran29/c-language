#include<stdio.h>
struct time
{
   int hrs;
   int mins;
   int secs;
}t;

int main()
{
  struct time t;
  printf("enter the hour:");
  scanf("%d",&t.hrs);
  printf("enter the minutes:");
  scanf("%d",&t.mins);
  printf("enter the secounds:");
  scanf("%d",&t.secs);
  printf("time:%d:%d:%d",t.hrs,t.mins,t.secs);
return 0;
}
