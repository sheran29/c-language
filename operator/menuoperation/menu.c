#include<stdio.h>
int main()
 {
     int i,j,k,n;
     int a[2][2];
     int b[2][2];
     int sub[2][2]={0};
     int sum[2][2]={0};
     int mul[2][2]={0};
     printf("enter 1st matrix:");
     for(i=0;i<2;i++)
     {
       for (j=0;j<2;j++)
       {   
           scanf("%d",&a[i][j]);
        }
     }
    printf("enter 2nd matrix:");
    for(i=0;i<2;i++)
    {
      for(j=0;j<2;j++)
       {
        scanf("%d",&b[i][j]);
       }
     }
   printf("enter your choice");
   printf("1.Addition\n2.subtraction\n3.mulitiplication\n4.exist:");
   scanf("%d",&n);
  switch(n)
  { 
  case 1:printf("addition:");
           for(i=0;i<2;i++)
           {
               for(j=0;j<2;j++)
              {
              sum[i][j]=a[i][j]+b[i][j];
              printf("%d",sum[i][j]);
              }
           }
	    break;
  case 2:printf("addition:");
         for(i=0;i<2;i++)
           {
            for(j=0;j<2;j++)
            {
              sub[i][j]=a[i][j]-b[i][j];
             printf("%d",sub[i][j]);
            }
           }
           break;
  case 3:printf("multiplication");
          for(i=0;i<2;i++)
           {
            for(j=0;j<2;j++)
              {
               for(k=0;k<2;k++)
                {
                   mul[i][j]=a[i][k]*b[k][j];
                } 
             printf("%d",mul[i][j]);
              }
             }
         break;
  default :printf("enter wrong choice");
           break;
   }
  return 0;
}

