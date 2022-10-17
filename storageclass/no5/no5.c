#include<stdio.h>
void  main()
{
register int i=10;
int*p;
//int*p=&i;
printf("value of i:%d",i);
//printf("address of i:"%d",p);
printf("here register wont give  memory access");
printf("because it was stored in ram");

}

