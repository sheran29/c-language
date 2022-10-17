#include<stdio.h>
int main()
{
  int r,n,original,s=0;
  printf("enter the number:");
  scanf("%d",&n);
 original=n;
  while(n!=0)
   {
    r=n%10;
    s=s*10+r;
    n=n/10;
   }
  if(s==original)
  {
   printf("this is a palindrom");
   }
  else
 {
    printf("this is not a palindrom");
  }
return 0;
}

