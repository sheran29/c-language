#include<stdio.h>
int main()
  
 {
  int a, b,max;
  printf("enter 2 no's:");
  scanf("%d %d",&a,&b);
  max=a<b?b:a;
  printf("maximun no is:%d",max);
 return 0;
}
