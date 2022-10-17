#include<stdio.h>
int main()
{

   int sec=7322;
   int hrs,min;
   hrs=sec/3600;
   min=(sec-(3600*hrs))/60;
   sec=sec-(3600*hrs)-(min*60);
   printf("Time:%d:%d:%d",hrs,min,sec);
  return 0;
}
