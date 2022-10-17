#include<stdio.h>
#include"header.h"
void fun(int a);
void main()
{
    auto int a=10;
    register int b;
    s();
    fun(a);
    printf("\nauto a%d",a);
    printf("\nregister b is%d",b);
    s();
    extern int d;
    printf("\nextern d:%d",d);

}

void fun(int a)
{
  a++;
  printf("\ninside function a value is%d",a);
}

