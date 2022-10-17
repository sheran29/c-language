#include<stdio.h>
int setbit(int n);
int setbit(int n)
{
  if(n==0)
  {
    return 0;
  }
  else
 {
   return ((n&1)+setbit(n>>1));
 }
}
int main()
{
   int n;
   printf("enter the number:\n");
   scanf("%d",&n);
   printf("set bit:%d",setbit(n));
   return 0;
}
