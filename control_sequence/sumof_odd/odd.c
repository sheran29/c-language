#include<stdio.h>
int main()
{
  int n,count=1,sum=0;
  printf("enter N value:");
  scanf("%d",&n);
 // for(;count<=n;count++)
  while(count<=n)
   {
     if(count%2!=0)
     {
        sum=sum+count;
     }
     count++;
    }
  printf("sum of odd no is:%d\n",sum);
return 0;
}
