#include<stdio.h>
int gcd(int x,int y);
int main()
{
  int a,b;
  printf("enter two integer:");
  scanf("%d %d",&a,&b);
  printf("GCD of %d %dis %d",a,b,gcd(a,b));
  return 0;
}
 int gcd(int x,int y)
{
   if(y!=0)
   {
     return gcd(y,x%y);
   }
  else
   return x;
} 
