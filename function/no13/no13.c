#include<stdio.h>
int fact(int x);
int main()
{
    int n=7;
   float sum=1/(float)fact(1)+2/(float)fact(2)-3/(float)fact(3)+4/(float)fact(4)+5/(float)fact(5)+6/(float)fact(6)+7/(float)fact(7);
   printf("sum of first seven term: %4f",sum);
 return 0;
}
int fact(int x)
{
  if(x==1)
   {
     return 1;
   }
  else
   {
    return (x*fact(x-1));
   }
}
