#include<stdio.h>
void swap(int *X ,int *y);
int main()
{

  int a,b;
  printf("enter A value:");
  scanf("%d",&a);
  printf("enter B value:");
  scanf("%d",&b);
  printf("value before swap:%d\t%d\n",a,b);
  swap(&a,&b);
  printf("values after swap:%d\t%d\n",a,b);
  return 0;
}
void swap(int *x,int *y)
{
  int temp;
  temp=*x;
  *x=*y;
  *y=temp;
}
