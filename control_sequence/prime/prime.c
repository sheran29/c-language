#include<stdio.h>
 int main()
{
   int n, i,count=1;
   printf("how many no's you want to print:");
   scanf("%d",&n);
  if((n==1)||(n==0))
   {
     return 0;
   }
  printf("prime numbers are:");
   for(i=2;i<=n;i++)
     {
       if(i%2!=0)
        {
          printf("\n%d",i);
        }
     }
return 0;
}
