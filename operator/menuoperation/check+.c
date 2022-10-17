#include<stdio.h>
#include<stdlib.h>
int add(int x[2][2],int y[2][2],int sum[2][2]);
void display(int d[2][2]);
int add(int x[2][2],int y[2][2],int sum[2][2])
  {
    for(int i=0;i<2;i++)
     {
      for(int j=0;j<2;j++)
      {
        sum[i][j]=x[i][j]+y[i][j];
      }
     }
   return 0;
}
void display(int d[2][2])
{
 for(int i=0;i<2;i++)
  {
   for(int j=0;j<2;j++)
    {
     printf("%d",d[i][j]);
    }
     printf("\n");
  }
}

int main()
{
  int n;
  int a[2][2]={{1,1},{2,2}};
  int b[2][2]={{1,1},{1,1}};
  int c[10][10]={0};
  printf("enter the choice:");
  scanf("%d",&n);
  switch(n)
  {
   case 1:
          add(a,b,c);
          display(c);
          break;
  }
 printf("succesful");
 return 0;
}
