#include<stdio.h>
int main()
{
  int n,sum=0;
  int i=1;
  printf("enter the digit to be added:");
  scanf("%d",&n);
//  for(int i=0;i<=n;i++)
  if(i<=n)
   {
    sum=sum+i;
    i++;
    }
  else
   {
     break;
   }
  printf("sum of %d is:%d\n",n,sum);
 return 0;
}

