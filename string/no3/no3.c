#include<stdio.h>
#include<string.h>
int main()
{
   int n;
   char a[5][10];
   printf("enter no of string:");
   scanf("%d",&n);
   printf ("\nenter the string:");
   for(int i=0;i<n;i++)
    {
     scanf("%s",a[i]);
    }
   char temp[10];
   for(int i=0;i<n;i++)
    {
     for(int k=i+1;k<n;k++)
      {
          if(strcmp(a[i],a[k])>0)
           { strcpy(temp,a[i]);
             strcpy(a[i],a[k]);
             strcpy(a[k],temp);
           }
       }
    } 
   for(int i=0;i<n;i++)
    {
      printf("\nsorted array:\n%s",a[i]);
    }
  return 0;
}
