#include<stdio.h>
int main()
{
   int i,j;
   printf("enter the values:");
   scanf("%d%d",&i,&j);
   ((i<=40)&&(j<=40))?printf("both are  less than equal to 40\n"):
                      printf("both variable are not less than 40\n");
  ((i==20)||(j==20))?printf("atleast one variable is having 20\n"):printf("both values are not hanving 20\n");
 return 0;
}
