#include<stdio.h>
int main()
{
  int x[8]={10,20,30,40,50,60,70,80};
  printf("meaning of x:%p\n",x);
  printf("\nmeaning of [x+2]:%p",(x+2));
  printf("\nmeaning of *x:%d",*x);
  printf("\nmeaning of [*x+2]:%d",(*x+2));
  printf("\nmeaning of *[x+2]:%d",*(x+2));
  return 0;
}
