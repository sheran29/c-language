#include<stdio.h>
int main()
{
 char *color[6]={"red","green","blue","white","black","yellow"};
 printf("meaning of color:%p",color);
 printf("\nmeaning of (color+2):%p",(color+2));
printf("\nmeaing of *colour:%s",*color);
printf("\nmeaing of *(color+2) and *(*(color+2)):%s %p",*(color+2),*(*(color+2)));
printf("\nmeaning of color[5]and *(color+5):%s %s",color[5],*(color+5));
return 0;
}

