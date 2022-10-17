#include<stdio.h>
void main()
{
  int a,b;
  printf("enter the 2 number:");
  scanf("%d%d",&a,&b);
  if(a==20&&b==20)
   {
    printf("both variable are having 20");
   }
 else if(a==20||b==20)
   {
    printf("alteast one variable have 20");
   }
  else if(a<=40&&b<=40)
   {
     printf("both are less than or equal to 40");
   }
  else
  {
    printf("both are not less than or equal to 40");
  }
}
