#include<stdio.h>
int main()
{
  int d1,m1,y1,y2,m2,d2;
  int d,m,y,formula;
  printf("enter the date month year:");
 scanf("%d %d%d",&d1,&m1,&y1);
 printf("enter the 2 date month year\n:");
 scanf("%d %d %d",&d2,&m2,&y2);
   d=d1-d2;
   m=m1-m2;
   y=y1-y2;
  formula=(365*(y+(y/4)-(y/100)+(y/400))+d+((153*m+8)/5));
 printf("no of days:%d",formula);
return 0;
}

