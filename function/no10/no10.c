#include<stdio.h>
int  binary(int n);
int hexa(int n);
int binary(int n)
{
   int a[20],i,j=0,b[20];
   for(i=0;n>0;i++)
   {
      a[i]=n%2;
      n=n/2;
    }
  for(i=i-1;i>=0;i--)
   {
     b[j]=a[i];
     j++;
   }
  printf("\nbinary form:");
  for(i=0;i<j;i++)
  {
    printf("%d",b[i]);
  }

 return 0;
}


 int hexa(int n)
{
  int q,r,i,j=0;
 char hexa[50];
  q=n;
  while(q!=0)
  {
   r=q%16;
   if(r<10)
    {
     hexa[j++]=48+r;
    }
   else
    {
     hexa[j++]=55+r;
    }
   q=q/16;
  }
 printf("\nhexadecimal value:");
  for(i=j;i>=0;i--)
   {
    printf("%c",hexa[i]);
   }
return 0;
}
int main()
{
  int n;
  printf("\nenter the number to be convert:");
  scanf("%d",&n);
  binary(n);
  hexa(n);
return 0;
}
