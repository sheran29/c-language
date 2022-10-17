#include<stdio.h>
int fun(int x);
int main()
{
  int n=10;
 printf("sum of no's:%d", fun(n));
 return 0;
}


int fun(int x)
{
  int sum=0;
  if(x==0)

    return 0;

 else

     sum=x+fun(x-1);

}
