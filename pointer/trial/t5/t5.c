#include<stdio.h>
int main()
{
  int q=5;
int *const p=&q;
const int q2=7;
p=&q2;
return 0;
}
