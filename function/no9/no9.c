#include<stdio.h>
int trans(int a[10][10] ,int m ,int n);
int main()
{
  int a[10][10];
  int m,n;
  printf("enter the  row and column:");
  scanf("%d %d",&m,&n);
  printf("enter the array:");
 for(int i=0;i<m;i++)
   {for(int j=0;j<n;j++)
     {
      scanf("%d",&a[i][j]);
     }
    }
  trans(a,m,n);
return 0;
}
int trans(int a[10][10] ,int m ,int n)
{
   int trans[10][10]={0};
   for(int i=0;i<m;i++)
     {
        for(int j=0;j<n;j++)
         {
          trans[i][j]=a[j][i];
         }
     }
  printf("\ntransposed matrix:");
   for(int i=0;i<n;i++)
    {
       for(int j=0;j<m;j++)
        {
          printf("\t%d",trans[i][j]);
        }
     }
 return 0;
}
