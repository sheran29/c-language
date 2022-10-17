#include<stdio.h>
#define Fact(n){\
for(i=1;i<=n;i++)\
{  f=f*i;\
}\
printf("\nfactorial :%d",f);\
}
int main()
{
  int  i,n;
  printf("enter the number:");
  scanf("%d",&n);
  int f=1;
  Fact(n);
  return 0;
}

