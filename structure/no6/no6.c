#include<stdio.h>
enum com{add=1,sub,mul};
enum com c;
struct complex
{
   int r;
   int i;
};
struct complex s1,s2,add1,sub1,mul1;
int main()
{
   int n;
//   struct complex s1,s2,add,sub,mul;
   printf("enter your choice:");
   printf("\nadd%d",c=add);
   printf("\nsub%d",c=sub);
   printf("\nmul%d",c=mul);
   scanf("%d",&c);
   switch(c)
   {
     case add: printf("enter the complex no1:");
               scanf("%d%d",&s1.r,&s1.i);
               printf("\nenter the complex no2:");
               scanf("%d%d",&s2.r,&s2.i);
               add1.r=s1.r+s2.r;
               add1.i=s1.i+s2.i;
               printf("\naddition:%d%di",add1.r,add1.i);
               break;
    case sub:  printf("enter the complex no1:");
               scanf("%d%d",&s1.r,&s1.i);
               printf("\nenter the complex no2:");
               scanf("%d%d",&s2.r,&s2.i);
               sub1.r=s1.r-s2.r;
               sub1.i=s1.i-s2.i;
               printf("\nsubraction:%d%di",sub1.r,sub1.i);
               break;
    case mul: printf("enter the complex no1:");
               scanf("%d%d",&s1.r,&s1.i);
               printf("\nenter the complex no2:");
               scanf("%d%d",&s2.r,&s2.i);
               mul1.r=(s1.r*s2.r)-(s1.i*s2.i);
               mul1.i=(s1.r*s2.i)+(s1.i*s2.r);
               printf("\nmultiplication:%d%di",mul1.r,mul1.i);
               break;
    default:printf("worng choice");
            break;
    }
return 0;
}

