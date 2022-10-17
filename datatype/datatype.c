#include<stdio.h>
int main()
{
  float  si,p,n,r;
  printf("enter the princple rate and time:");
  scanf("%f%f%f",&p,&n,&r);
   si= ((p*n*r)/100);
  printf("simple interest:%f",si);
  return 0;
}
