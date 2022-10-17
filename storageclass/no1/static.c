#include<stdio.h>
int d=50;
void s()
{
  static int c;
  //int d=50;
  c+=10;
  printf("static c:%d",c);
}

