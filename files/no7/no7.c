#include<stdio.h>
#include<stdlib.h>
void main()
{
  int a=5,b=3,c;
//  printf("enter 2 numbers");
//  scanf("%d%d",&a,&b);
asm
{
       mov ax,a
       "mov bx,b"
       "add ax,bx"
       "mov c,ax"
);
  printf("%d",c);
}


