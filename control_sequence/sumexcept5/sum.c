#include<stdio.h>
int main()
{
  int i=1,n,s,sum=0;
  printf("enter how many numbers:");
  scanf("%d",&n);
  while(i<=n)
     {
      if(i%5!=0)
       {
        sum=(sum+i);
       }
       i++;
}
  printf("sum of %d nautral number is:%d",n,sum);
  
//  for(int j=1;j<=5;j++)
//   {
//    if(j%5==0)
//     {
//      continue;
//     }
//   else
//    {
//     s=s+j;
//    }
//   }
// printf("for loop:%d",s);

  return 0;
}

