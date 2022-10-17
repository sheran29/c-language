#include<stdio.h>
int main()
{
  int num,originalnum,rem=0,result=0;
  printf("enter 3 digit interger:");
  scanf("%d",&num);
  originalnum=num;
  while(originalnum!=0)
 {
  rem=originalnum%10;
  result+=(rem*rem*rem);
  originalnum /= 10;
 }
if(result==num)
  printf("%d amstrong no:",num);
  else
  printf("%d not amstrong no:",num);
return 0;
}

