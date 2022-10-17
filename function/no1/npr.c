#include<stdio.h>
int fact(int n);
int fact(int n)
{
 
 if(n==1)
  {
    return 1;
  }
  else
   {
     return (n*fact(n-1));
   }
}

int main()
{
 int n,i,r;
 printf("enter the n value:");
 scanf("%d",&n);
 printf("enter r value:");
 scanf("%d",&r);
 i=fact(n)/fact(n-r);
 printf("permutation value is:%d",i);
 return 0;
}
