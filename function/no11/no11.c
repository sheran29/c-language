#include<stdio.h>
int indexr(int *s,int n,int t);
int indexr(int *s,int n,int t)
{  int a;
  for(int i=0;i<n;i++)
    {
      for(int j=i+1;j<n;j++)
       {
         if(s[i]==s[j])
         {
             a=j;
         }
      }
  }
   printf("index value of %d:%d",t,a);
}


int main()
{
  int s[20];
  int n,t;
  printf("enter the size:");
  scanf("%d",&n);
  printf("\nenter the key bit to check occurence:");
  scanf("%d",&t);
  printf("enter the element:");
  for(int i=0;i<n;i++)
   {
     scanf("%d",&s[i]);
   }
  indexr(s,n,t);
return 0;
}
