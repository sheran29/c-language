#include<stdio.h>
int main()
{ int s;
  int a[5]={1,2,3,4,5};
  register int b[2]={6,7};
  b[2]=&s;
  printf("here auto int have a scope inside this for loop alone");
  printf("\n prints the value of a:\n");
  for(int i=0;i<5;i++)
   {
      printf("%d",a[i]);
   }
  printf("register have store in register,");
  printf("\nI am using same i variable here to check the scope of auto variable.");
  printf("\n register b value :\n");
  for(int i=0;i<2;i++)
   {
    printf("%d",b[i]);
   }
return 0;
}
