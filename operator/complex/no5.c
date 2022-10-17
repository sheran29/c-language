 #include<stdio.h>
struct complex
{
   int r;
   int i;
};
int main()
{
   struct complex s1,s2,sub,mul,add;
   printf("enter the complex no1:");
   scanf("%d%d",&s1.r,&s1.i);
   printf("\nenter the complex no2:");
   scanf("%d%d",&s2.r,&s2.i);
   add.r=s1.r+s2.r;
   add.i=s1.i+s2.i;
   printf("\naddition:%di%d",add.r,add.i);
   sub.r=s1.r-s2.r;
   sub.i=s1.i-s2.i;
   printf("\nsubraction:%di%d",sub.r,sub.i);
   mul.r=(s1.r*s2.r)-(s1.i*s2.i);
   mul.i=(s1.r*s2.i)+(s1.i*s2.r);
   printf("\nmultiplication:%di%d",mul.r,mul.i);
   return 0;
}
