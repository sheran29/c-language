#include<stdio.h>
int main()
{
  int q=5;
  int*const p=&q;
 *p=7;
const int q2=6;
p=&q2;
return 0;
}
