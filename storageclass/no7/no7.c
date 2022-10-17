#include<stdio.h>
#include"header.h"
static int  a=10;//if use static in global we cannot use this separate .c file .. 
                   //it's lifetime is only within that program
void main()
{
  static int c=50;
  printf("local static:%d",c);
  int b=a++;
 printf("increment of global static:%d",b);
 s();
}
