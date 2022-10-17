#include<stdio.h>
int main()
{
    int num,n,newnum;
    printf("enter the number:");
    scanf("%d",&num);
    printf("enter the position:");
    scanf("%d",&n);
    newnum=num^(1<<n);
    printf("after toggling:%d",newnum);
    return 0;
}
