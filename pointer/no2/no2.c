#include<stdio.h>
int main()
{
  float table[2][3]={{1.1,1.2,1.3},{2.1,2.2,2.3}};
 printf("meainf of table:%p",table);
 printf("\nmeaning of (table+1):%p",(table+1));
 printf("\nmeaning of *(table+1):%p",*(table+1));
 printf("\nmeaning of (*(table+1)+1):%p",(*(table+1)+1));
 printf("\nmeaning of (*(table)+1):%p",(*(table)+1));
printf("\nvalue of*(*(table+1)+1):%f",*(*(table+1)+1));
printf("\nvalue of*(*(table)+1):%f",*(*(table)+1));
printf("\nvalue of *(*(table+1)):%f",*(*(table+1)));
printf("\nvalue of *(*(table)+1)+1:%f",*(*(table)+1)+1);
return 0;
}
