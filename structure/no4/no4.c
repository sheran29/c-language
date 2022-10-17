#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int ranks(int a);
struct student
{
     char name[50];
     int rollno;
     int marks[50];
     int ranks;
};
struct student s1[50],s2[50],s3[50];
union module
{
     int total;
     int avg;
};
union module u[50],u1[50],u2[50];
int main()
{
    int l,m,n;
    printf("1.dssd\n2.desd\n3.dad\n enter which course you want:");
    scanf("%d",&l);
    switch(l)
     {
      case 1:printf("\nenter how many student:");
             scanf("%d",&n);
             //struct dssd s1[n];
             for(int i=0;i<n;i++)
               {
                 printf("\nenter the student name:");
                 scanf("%s",s1[i].name);
               }
             for(int i=0;i<n;i++)
               {
                 printf("\nenter the rollno of 5 digits:");
                 scanf("%d",&s1[i].rollno);
               }
              printf("\nhow many modules you are having:");
               scanf("%d",&m);
              for(int i=0;i<n;i++)
              {
                for(int j=1;j<=m;j++)
                 {
                   printf("\nenter your marks of %d:",j);
                   scanf("%d",&s1[i].marks[j]);
                  }
               }
                for(int i=0;i<n;i++)
                  {
                    for(int j=1;j<=m;j++)
                    {
                     u[i].total+=s1[i].marks[j];
                    }
                     u[i].avg=u[i].total/m;
                   }
                 for(int i=0;i<n;i++)
                  {
                   printf("studendt name:%s\n",s1[i].name);
                   printf("rollno:%d\n",s1[i].rollno);
                   printf("\ntotal:%d",u[i].total);
                   printf("\naverage:%d",u[i].avg);
                   ranks(u[i].avg);
                }
               break;
     case 2:printf("\nenter how many student:");
             scanf("%d",&n);
             //struct dssd s1[n];
             for(int i=0;i<n;i++)
               {
                 printf("\nenter the student name:");
                 scanf("%s",s1[i].name);
               }
             for(int i=0;i<n;i++)
               {
                 printf("\nenter the rollno of 5 digits:");
                 scanf("%d",&s1[i].rollno);
               }
              printf("\nhow many modules you are having:");
               scanf("%d",&m);
              for(int i=0;i<n;i++)
              {
                for(int j=1;j<=m;j++)
                 {
                   printf("\nenter your marks of %d:",j);
                   scanf("%d",&s1[i].marks[j]);
                  }
               }
                for(int i=0;i<n;i++)
                  {
                    for(int j=1;j<=m;j++)
                    {
                     u[i].total+=s1[i].marks[j];
                    }
                     u[i].avg=u[i].total/m;
                   }
                 for(int i=0;i<n;i++)
                  {
                   printf("studendt name:%s\n",s1[i].name);
                   printf("rollno:%d\n",s1[i].rollno);
                   printf("\ntotal:%d",u[i].total);
                   printf("\naverage:%d",u[i].avg);
                   ranks(u[i].avg);
                }
               break;
    case 3:printf("\nenter how many student:");
             scanf("%d",&n);
             //struct dssd s1[n];
             for(int i=0;i<n;i++)
               {
                 printf("\nenter the student name:");
                 scanf("%s",s1[i].name);
               }
             for(int i=0;i<n;i++)
               {
                 printf("\nenter the rollno of 5 digits:");
                 scanf("%d",&s1[i].rollno);
               }
              printf("\nhow many modules you are having:");
               scanf("%d",&m);
              for(int i=0;i<n;i++)
              {
                for(int j=1;j<=m;j++)
                 {
                   printf("\nenter your marks of %d:",j);
                   scanf("%d",&s1[i].marks[j]);
                  }
               }
                for(int i=0;i<n;i++)
                  {
                    for(int j=1;j<=m;j++)
                    {
                     u[i].total+=s1[i].marks[j];
                    }
                     u[i].avg=u[i].total/m;
                   }
                 for(int i=0;i<n;i++)
                  {
                   printf("studendt name:%s\n",s1[i].name);
                   printf("rollno:%d\n",s1[i].rollno);
                   printf("\ntotal:%d",u[i].total);
                   printf("\naverage:%d",u[i].avg);
                   ranks(u[i].avg);
                }
               break;
      default:printf("worng choice");
              break;

 }
return 0;
}
int ranks(a)
{

   if(a<=90&&a>=100)
     printf("distinction");
   else if(a<=70&&a>=89)
      printf("first class");
   else if((a<=50)&&(a>=69))
       printf("second class");
    else
       printf("fail");
   return 0;
}
