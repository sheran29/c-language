#include<stdio.h>
void repeat(int *s,int n);
void repeat(int *s,int n)
{  printf("repeated numbers:");
   for(int i=0;i<n;i++)
    {
       for(int j=i+1;j<n;j++)
       {
         if(s[i]==s[j])
         {
          printf("\t%d",s[j]);
         }
      }
   }
}
int main()
{

   int i,n;
   int s[10];
   printf("enter the size:\n");
   scanf("%d",&n);
   printf("enter the elements:\n");
   for(i=0;i<n;i++)
   {
     scanf("%d",&s[i]);
   }
   repeat(s,n);
return 0;
}
