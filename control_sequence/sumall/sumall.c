#include<stdio.h>
int main()
{

   int n,sum=0,i;
   printf("enter N values:");
   scanf("%d",&n);
   for(i=0;i<n;i++)
    {
     sum+=i;
    }
   printf("sum value of%d:%d",n,sum);
  return 0;
}
