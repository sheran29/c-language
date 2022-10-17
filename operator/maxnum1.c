#include<stdio.h>
int main()
{
  int a,b,c;
  printf("enter 3 no's:");
  scanf("%d %d %d",&a,&b,&c);
  if((a>b)||(a>c))
 {  printf("maximun no is:%d",a);
 if else((b>a)||(b>c))
    printf("maximun no is:%d",b);
  else((c>a)||(c>b))
    printf("maximum no is:%d",c);
  return 0;
}
