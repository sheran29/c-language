#include<stdio.h>
int fact(int x);
int fact(int x)
{
  if(x==1)
    {
     return 1;
    }
  else
    {
     return(x*fact(x-1));
    }
}
int main()
{
  int n,r;
  printf("enter N value:");
  scanf("%d",&n);
  printf("\nenter the R value:");
  scanf("%d",&r);
  int npr=(fact(n)/fact(n-r));
  int ncr=(fact(n)/(fact(r)*fact(n-r)));
  printf("\nnpr:%d",npr);
  printf("\nncr:%d",ncr);
  return 0;
}
