#include<stdio.h>
int sum(int x,int y);
int sub(int x,int y);
int mul(int x,int y);
int div(int x,int y);
int fact(int x);
int square(int x);

int sum(int x,int y)
{
  if(y==0)
  return x;
  else
  return (1+sum(x,y-1));
}
int sub(int x,int y)
{
  if(y==0)
    return x;
  else
    return(1-sub(x,y-1));
}
int mul(int x, int y)
{
  int mul;
  mul=x*y;
 return mul;
}
int div(int x,int y)
{
  int div=1;
  div=x/y;
  return div;
}
int fact(int x)
{
  if(x==1)
    return 1;
  else
    return (x*fact(x-1));
}
int square(int x)
{
   int squ;
   squ=x*x;
   return squ;
}
int main()
{
  int n;
  int x,y;
  printf("enter the performance");
  printf("\n 1-addition,\n2-subraction,\n3-multipication,\n4-division,\n5-factorial,\n6-square:\t");
  scanf("%d",&n);
  switch(n)
   {
    case 1: printf("enter two number:");
            scanf("%d %d",&x,&y);
            printf("\nsum of %d %d is %d",x,y,sum(x,y));
            break;
    case 2: printf("\nenter two numbers:");
            scanf("%d %d",&x,&y);
            printf("\nsubraction of %d %d is %d",x,y,sub(x,y));
            break;
    case 3: printf("enter two numbers:");
            scanf("%d %d",&x,&y);
            printf("\n multipication of %d %d is%d",x,y,mul(x,y));
            break;
    case 4: printf("enter the division:");
            scanf("%d %d",&x,&y);
            printf("\ndivision of %d %d is%d",x,y,div(x,y));
            break;
    case 5: printf("enter the number to be factorized:");
            scanf("%d",&x);
            printf("\nfactorial of %d is %d",x,fact(x));
            break;
    case 6: printf("enter the number to be square:");
            scanf("%d",&x);
            printf("\nsquare of %d is %d",x,square(x));
            break;
    default:printf("enter worng choice");
            break;
    }
 return 0;
}
