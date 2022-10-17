#include<stdio.h>
struct sample
{
  int a;
  char b[5];
  double s;
}s;
union trial
{
   int a;
   char b[5];
   double s;
}u;
void main()
{
   printf("size of structure:%ld\n",sizeof(s));
   printf("size of union:%ld",sizeof(u));
}
