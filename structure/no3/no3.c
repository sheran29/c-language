#include<stdio.h>
typedef struct s_x
{
  unsigned int a:6;
  unsigned int b:4;
  unsigned int c:6;
}s_x;
typedef struct s_c
{
  st_x st_bit;
}s_c;
typedef struct s_v
{
  unsigned int a:8;
  unsigned int  :2;
 unsigned int b:6;
 unsigned int c:5;
}s_v;

int main()
{
   s_x s;
   s_c v;
   s_v st_v;
  v.st_bit.a=3;
  v.st_bit.b=5;
  v.st_bit.c=7;
 printf("value of a:%d\nvalue of b:%d\nvalue of c:%d\n",v.st_bit.a,v.st_bit.b,v.st_bit.c);
 v.st_bit.a=63;
 printf("largest value that can store is %d\n",v.st_bit.a);
return 0;
}
