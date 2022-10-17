#include<stdio.h>
int d=8;//we can call any were in the program
void g();
void main()
{
   int d=3;
    printf("local variable:%d",d);
    g();//here scope of d is inside the brackets
}
void g() 
 {
    printf("golabal variable:%d",d);
 }

